/* 
	Módulo Información Usuario Redsy Roleplay
	Fecha: 15/Noviembre/2020
	by Artic / Wo0x
*/
#include <YSI-Includes\YSI\y_hooks>
// — Enum jugador
enum userinfo
{
	// — Usuario
	uID, // ID SQL
	uNombre[MAX_PLAYER_NAME], // Nombre de Usuario
	uClave[128], // Contraseña
	uClave2[128],
	uIP[16], // IP al registrarse
	uRegistro[32], // Fecha - Hora al registrarse
	uAdmin, // Nivel Administrativo
	uAdminDuty, // De Servicio
	uOtorgado, // Rango Otorgado
	upID[3],

	// — Personaje
	pID, // ID SQL
	puID, // ID Cuenta SQL
	pNombre[MAX_PLAYER_NAME], // Nombre de personaje
	pSexo, // Sexo
	pEdad, // Edad
	pRegistro[32], // Fecha - Hora al registrar
}
new user[MAX_PLAYERS][userinfo];
new userpersonaje[MAX_PLAYERS][MAX_PLAYER_NAME], ultconexion[MAX_PLAYERS][32];

new Dialogid[MAX_PLAYERS];
new intentos[MAX_PLAYERS];

stock _ResetJugador(playerid)
{
	// —————————— CUENTA —————————//
	// —— Usuario
	user[playerid][uID] = 0;
	user[playerid][uAdmin] = 0;
	user[playerid][uOtorgado] = 0;
	// —— Personaje
	user[playerid][pID] = 0;
	user[playerid][pSexo] = 0;
	user[playerid][pEdad] = 0;
	//———————————————————————————//
	Dialogid[playerid] = -1;
	intentos[playerid] = 0;
	return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	switch(dialogid)
	{
		case d_usuario:
		{
			if(!response) return _KickRazon(playerid, "Has sido expulsado por cancelar el diálogo de inicio.");
			if(_DetectaSigno(inputtext)) return _ShowPlayerDialog(playerid, d_usuario, DIALOG_STYLE_INPUT, "Panel de inicio", "{FFFFFF}Usa el siguiente espacio para ingresar tu nombre de usuario.", "Aceptar", "Salir");
			if(strlen(inputtext) < 3 || strlen(inputtext) > 18) return _ShowPlayerDialog(playerid, d_usuario, DIALOG_STYLE_INPUT, "Panel de inicio", "{FFFFFF}Usa el siguiente espacio para ingresar tu nombre de usuario. No mayor a 18 caracteres.", "Aceptar", "Salir");

			alm(user[playerid][uNombre], inputtext);

			if(_VerificarUsuario(inputtext))
			{
				_ShowPlayerDialog(playerid, d_clave, DIALOG_STYLE_PASSWORD, "Panel de Inicio", "{FFFFFF}La cuenta ingresada existe en la base de datos, ingresa tu contraseña.", "Aceptar", "Salir");
				SetPVarInt(playerid, "_TipoClave", 1);
			}
			else
			{
				_ShowPlayerDialog(playerid, d_crear, DIALOG_STYLE_MSGBOX, "Información de la cuenta", "{FFFFFF}La cuenta ingresada no existe, ¿deseas crearla?", "Crear", "Regresar");
			}

		}
		case d_crear:
		{
			if(!response) return _ShowPlayerDialog(playerid, d_usuario, DIALOG_STYLE_INPUT, "Panel de inicio", "{FFFFFF}Usa el siguiente espacio para ingresar tu nombre de usuario.", "Aceptar", "Salir");
			if(Registro == 1) return _KickRazon(playerid, "El registro está deshabilitado.");
			_ShowPlayerDialog(playerid, d_clave, DIALOG_STYLE_PASSWORD, "Panel de Registro", "{FFFFFF}Ingresa tu contraseña a continuación, no debe sobrepasar los 18 caracteres.", "Aceptar", "Salir");
			SetPVarInt(playerid, "_TipoClave", 2);
		}
		case d_clave:
		{
			if(!response) return _KickRazon(playerid, "Has sido expulsado por cancelar el diálogo de registro.");

			switch(GetPVarInt(playerid, "_TipoClave"))
			{
				case 1:
				{
					if(strlen(inputtext) < 3 || strlen(inputtext) > 18) return _ShowPlayerDialog(playerid, d_clave, DIALOG_STYLE_PASSWORD, "Panel de Inicio", "{FFFFFF}La cuenta ingresada existe en la base de datos, ingresa tu contraseña.", "Aceptar", "Salir");
					DeletePVar(playerid, "_TipoClave");
					new query[128], content[128];
					mysql_format(Database, query, sizeof query, "SELECT _Clave, _ID FROM _Usuarios WHERE _Username = '%e' LIMIT 1", user[playerid][uNombre]);
					new Cache:CacheLogin = mysql_query(Database, query);
					cache_get_value_name(0, "_Clave", content);
					format(user[playerid][uClave], 128, "%s", content);
					cache_get_value_name_int(0, "_ID", user[playerid][uID]);
					cache_delete(CacheLogin);
					bcrypt_check(inputtext, user[playerid][uClave], "_CompararClave", "i", playerid);
				}
				case 2:
				{
					if(strlen(inputtext) < 3 || strlen(inputtext) > 18) return _ShowPlayerDialog(playerid, d_clave, DIALOG_STYLE_PASSWORD, "Panel de Registro", "{FFFFFF}Ingresa tu contraseña a continuación, no debe sobrepasar los 18 caracteres.", "Aceptar", "Salir");
					DeletePVar(playerid, "_TipoClave");
					alm(user[playerid][uClave], inputtext);
					bcrypt_hash(inputtext, BCRYPT_COST, "_EncriptarClave", "d", playerid);
				}
			}
		}
	}
	return 1;
}

funcion _VerificarUsuario(const usuario[])
{
	new query[128];
	mysql_format(Database, query, sizeof query, "SELECT * FROM _Usuarios WHERE _Username = '%e' LIMIT 1", usuario);
	new Cache:CacheUser = mysql_query(Database, query);

	if(cache_num_rows())
	{
		cache_delete(CacheUser);
		return 1;
	}
	cache_delete(CacheUser);
	return 0;
}

funcion _CompararClave(playerid)
{
	new bool:match = bcrypt_is_equal();
	if(match)
	{
		new query[128];
		mysql_format(Database, query, sizeof query, "SELECT * FROM _Usuarios WHERE _ID = '%e' LIMIT 1", user[playerid][uID]);
		new Cache:CacheClave = mysql_query(Database, query);
		cache_get_value_name(0, "_Username", query);
		alm(user[playerid][uNombre], query);
		cache_delete(CacheClave);
		_Personajes(playerid);
		return 1;
	}
	intentos[playerid]++;
	if(intentos[playerid] == 3) return _KickRazon(playerid, "Has sido expulsado por fallar en el logueo.");
	SetPVarInt(playerid, "_TipoClave", 1);
	_ShowPlayerDialog(playerid, d_clave, DIALOG_STYLE_PASSWORD, "Panel de Inicio", "{FFFFFF}La cuenta ingresada existe en la base de datos, ingresa tu contraseña.", "Aceptar", "Salir");
	return 1;
}

funcion _EncriptarClave(playerid)
{
	new hash[BCRYPT_HASH_LENGTH];
	bcrypt_get_hash(hash);

	new query[300];
	mysql_format(Database, query, sizeof query, "INSERT INTO _Usuarios (_Username, _Clave, _Registro, _RegistroHora, _IP) VALUES ('%e', '%e', '%e', '%e', '%e')", user[playerid][uNombre], hash, _Fecha(), _Hora(), user[playerid][uIP]);
	new Cache:CacheReg = mysql_query(Database, query);

	user[playerid][uID] = cache_insert_id();

	cache_delete(CacheReg);

	_Personajes(playerid);
	return 1;
}

funcion _Personajes(playerid)
{
	new query[128];
	mysql_format(Database, query, sizeof query, "SELECT _NombreApellido FROM _Personajes WHERE _UserID = '%d'", user[playerid][uID]);
	new Cache:CachePersonajes = mysql_query(Database, query);

	for(new i = 0; i < 3; i++) alm(userpersonaje[playerid][i], "personaje_inexistente");

	new rows = cache_num_rows(), personajes[1000], strpers[128];
	strcat(personajes, "ID\tNombre Del Personaje\tÚltima conexión\n");
	if(!rows)
	{
		for(new i = 0; i < 3; i ++) 
		{
			strcat(personajes, "{C0C0C0}-\tSlot disponible\t—\n");
		}
	}
	else
	{
		for(new i = 0; i < rows; i++)
		{
			cache_get_value_name(i, "_NombreApellido", strpers);
			alm(userpersonaje[playerid][i], strpers);
			cache_get_value_int(i, "_ID", user[playerid][upID][i]);
			cache_get_value_name(i, "_UltimaConexion", strpers);
			alm(ultconexion[playerid][i], strpers);
			format(strpers, sizeof(strpers), "{FFFFFF}— ID: %d\t%s\t%s\n", user[playerid][upID][i], userpersonaje[playerid][i], ultconexion[playerid][i]);
			strcat(personajes, strpers);
		}
		for(new i = 0; i < 3; i++)
		{
			if(strcmp(userpersonaje[playerid][i], "personaje_inexistente", true) == 0)
			{
				strcat(personajes, "{C0C0C0}-\tSlot disponible\t—\n");
			}
		}
	}
	cache_delete(CachePersonajes);
	_ShowPlayerDialog(playerid, d_personajes, DIALOG_STYLE_TABLIST_HEADERS, "Personajes", personajes, "Seleccionar", "Salir");
	return 1;
}
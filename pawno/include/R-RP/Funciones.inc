// ——————— Detección de Baneo ——————— //
// - Consulta chequeando IP
stock CheckBanIP(playerid)
{
	// - variables
	new 
		ip[16],
		query[128]
	;
	// - IP
	GetPlayerIp(playerid, ip, sizeof(ip));
	//- MYSQL
	mysql_format(Database, query, sizeof(query), "SELECT * FROM _Baneados WHERE ban_ip = %e AND ban_tipo = 1 LIMIT 1", ip);
	mysql_tquery(Database, query, "CheckBan", "i", playerid);
	return 1;
}
//-consulta
funcion:CheckBan(playerid)
{
	if(!cache_num_rows())
	{
		_Dialogo(playerid, d_usuario, DIALOG_STYLE_INPUT, "> Ingreso", "Hola, usa el siguiente espacio para ingresar tu nombre de usuario.\nEn caso de no existir el sistema te permitirá crearlo.", "Aceptar", "Salir");
		return 1;
	}
	new content[128];
	// - Se cargan los datos
	cache_get_value_int(0, "ban_id", InfoBan[playerid][bID]);
	cache_get_value(0, "ban_responsable", content);
	alm(InfoBan[playerid][bResponsable], content);
	cache_get_value(0, "ban_razon", content);
	alm(InfoBan[playerid][bRazon], content);
	cache_get_value(0, "ban_fecha", content);
	alm(InfoBan[playerid][bFecha], content);
	cache_get_value(0, "ban_ip", content);
	alm(InfoBan[playerid][bIP], content);
	// - Muesta el dialogo
	format(content, sizeof(content), "Tu IP (%s) está bloqueada en nuestra base de datos.\n\nID Baneo: %d\nAdministrador: %s\nRazón: %s\nFecha: %s\nPuedes apelar tu desbaneo vía Foro ("URL_FORO")", InfoBan[playerid][bIP], InfoBan[playerid][bID], InfoBan[playerid][bResponsable], InfoBan[playerid][bRazon], InfoBan[playerid][bFecha]);
	_Dialogo(playerid, d_ban, DIALOG_STYLE_MSGBOX, "> IP Bloqueada", content, "Aceptar", "");
	SetTimerEx("_Expulsar", 1000, false, "i", playerid);
	return 1;
}

// ——————— Verificación de cuenta ——————— //
// — Verificar cuenta, si existe muestra el login, si no existe diálogo de confirmación.
funcion:_VerificarCuenta(playerid)
{
	new string[128];
	if(!cache_num_rows())
	{
		format(string, sizeof(string), "El nombre de usuario que has ingresado (%s) no está registrado en la base de datos. ¿Deseas registrarlo?", user[playerid][uNombre]);
		_Dialogo(playerid, d_confirmacion, DIALOG_STYLE_MSGBOX, "> Confirmación", string, "Registrar", "Regresar");
		return 1;
	}

	foreach(new p: Player)
	{
		if(user[p][uConectado])
		{
			if(strcmp(user[playerid][uNombre],user[p][uNombre], true) == 0)
				return _Kick(playerid, "Has sido kickeado por intentar entrar con un nombre de un usuario conectado.");
		}
	}

	SetPVarInt(playerid, "tipo_ingreso", 2); // 1 = Registro, 2 = logueo
	format(string, sizeof(string), "El nombre de usuario que has ingresado (%s) está registrado en nuestra base de datos, ingresa la contraseña para loguear.\n'Regresar' te llevará al menú anterior.", user[playerid][uNombre]);
	_Dialogo(playerid, d_clave, DIALOG_STYLE_PASSWORD, "> Iniciar sesión", string, "Ingresar", "Regresar");
	return 1;
}
// ——————— Proceso de Registro ——————— //
// - Encriptación
funcion:_EncriptarClave(playerid)
{
	new encrypt[BCRYPT_HASH_LENGTH];
	bcrypt_get_hash(encrypt);
	alm(user[playerid][uClave], encrypt);
	new query[128];
	alm(user[playerid][uRegistro], _Fecha());
	alm(user[playerid][uRegistroH], _Hora());
	GetPlayerIp(playerid, user[playerid][uIP], 16);
	mysql_format(Database, query, sizeof(query), "INSERT INTO _Usuarios (acc_Usuario, acc_Clave, acc_Fecha_Registro, acc_Hora_Registro, acc_IP) VALUES (%e, %e, %e, %e, %e)", user[playerid][uNombre], encrypt, _Fecha(), _Hora(), user[playerid][uIP]);
	mysql_tquery(Database, query, "_RegistrarJugador", "i", playerid);
	return 1;
}
// - Registrar
funcion:_RegistrarJugador(playerid)
{
	user[playerid][uID] = cache_insert_id();
	_Personajes(playerid);
	return 1;
}
// ——————— Proceso de Login ——————— //
// - Comparación inicial
funcion:_CompararClaves(playerid)
{
	new content[128];
	cache_get_value(0, "acc_Clave", content);
	cache_get_value(0, "acc_ID", user[playerid][uID]);
	alm(user[playerid][uClave], content);
	bcrypt_check(user[playerid][uClave2], user[playerid][uClave], "_CheckClave", "i", playerid);
	return 1;
}
// - Comprobación
funcion:_CheckClave(playerid)
{
	new bool:match = bcrypt_is_equal();
	if(match)
	{
		new query[128];
		mysql_format(Database, query, sizeof(query), "SELECT * FROM _Usuarios WHERE Acc_ID = '%d' LIMIT 1", user[playerid][uID]);
		mysql_tquery(Database, query, "_LoadUser", "i", playerid);
		return 1;
	}
	return 1;
}
// ——————— Usuarios ——————— //
// - Cargado de Usuario
funcion:_LoadUser(playerid)
{
	if(cache_num_rows())
	{
		new content[64];
		cache_get_value(0, "acc_IP", content);
		alm(user[playerid][uIP], content);
		_Personajes(playerid);
		return 1;
	}
	return 1;
}
// ——————— Personajes ——————— //
//- consulta personajes
funcion:_Personajes(playerid)
{
	new query[128];
	mysql_format(Database, query, sizeof(query), "SELECT personaje_nombre FROM _Personajes WHERE personaje_uid = %d LIMIT 3", user[playerid][uID]);
	mysql_tquery(Database, query, "_MostrarPersonajes", "i", playerid);
	return 1;
}
funcion:_MostrarPersonajes(playerid)
{
	for(new i = 0; i < 3; i++) alm(userpersonaje[playerid][i], "personaje_inexistente");
	new rows = cache_num_rows(), personajes[1000], strpers[128];
	strcat(personajes, "ID\tNombre Del Personaje\tÚltima conexión\n");
	if(rows)
	{
		for(new i = 0; i < 3; i ++) 
		{
			strcat(personajes, "{C0C0C0}-\t—— Slot disponible\t—\n");
		}
	}
	else
	{
		for(new i = 0; i < rows; i++)
		{
			cache_get_value(i, "personaje_nombre", strpers);
			alm(userpersonaje[playerid][i], strpers);
			cache_get_value(i, "personaje_id", user[playerid][upID][i]);
			cache_get_value(i, "personaje_ultima_conexion", strpers);
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
	_Dialogo(playerid, d_personajes, DIALOG_STYLE_TABLIST_HEADERS, "> Personajes", personajes, "Seleccionar", "Cancelar");
	return 1;
}
// - Funciones Generales
stock alm(string[], string2[]) // - créditos Edinson Walker 
{
	strmid(string, string2, 0, strlen(string2), strlen(string2) + 1);
	return 1;
}

//- Kick 
funcion:_Kick(playerid, razon[])
{
	new string[128];
	format(string, sizeof(string), "Administración: {FFFFFF}%s", razon);
	SendClientMessage(playerid, COLOR_ROJO, string);
	SetTimerEx("_Expulsar", 1000, false, "i", playerid);
	return 1;
}	

funcion:_Expulsar(playerid)
{
	Kick(playerid);
	return 1;
}
//-Safe Dialog
funcion:_Dialogo(playerid, dialogid, style, caption[], info[], button1[], button2[])
{
	currentDialog[playerid] = dialogid;
	ShowPlayerDialog(playerid, dialogid, style, caption, info, button1, button2);
	return 1;
}
//- fecha
_Fecha()
{
	new year, month, day, str[32], mes[16];
	getdate(year, month, day);
	switch(month)
	{
		case 1: mes = "Enero";
		case 2: mes = "Febrero";
		case 3: mes = "Marzo";
		case 4: mes = "Abril";
		case 5: mes = "Mayo";
		case 6: mes = "Junio";
		case 7: mes = "Julio";
		case 8: mes = "Agosto";
		case 9: mes = "Septiembre";
		case 10: mes = "Octubre";
		case 11: mes = "Noviembre";
		case 12: mes = "Diciembre";
	}
	format(str, sizeof(str), "%02d de %s del %02d", day, mes, year);
	return str;
}
// - hora
_Hora()
{
	new hour, minute, second, str[32]; 
	gettime(hour, minute, second);
	format(str, sizeof(str), "%02d:%02d:%02d", hour, minute, second);
	return str;
}
//-Detectar signos, para evitar "xploits"
_DetectaSigno(const string[])
{
	if(!string[0])
		return 1;
	else for (new i = 0, len = strlen(string); i != len; i++)
	{
		if(string[i] == '=' || string[i] == '\'' || string[i] == '%' || string[i] == '(' || string[i] == ')')
			return 1;
	}
	return 0;	
}
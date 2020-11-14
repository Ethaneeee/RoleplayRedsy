//- Public´s
public OnGameModeInit()
{
	AntiAmx();
	// — Configuración inicial —
	Database = mysql_connect(MYSQL_HOST, MYSQL_USER, MYSQL_PASS, MYSQL_DB); //- conexión
	SetGameModeText("R-RP v"VERSION"");
	SendRconCommand("hostname "NOMBRE"");
	SendRconCommand("language Español");
	SendRconCommand("mapname Los Santos");
	// — configuración extra
	AllowInteriorWeapons(true);
	DisableInteriorEnterExits();
	EnableStuntBonusForAll(false);
	ShowPlayerMarkers(PLAYER_MARKERS_MODE_GLOBAL);
	return 1;
}

public OnPlayerConnect(playerid)
{
	ResetPlayerVariables(playerid);
	return 1;
}

public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	//-Dialogo inválido
	if(currentDialog[playerid] == -1) return 1;
	currentDialog[playerid] = -1;
	//-switch para optimización
	switch(dialogid)
	{

		case d_usuario:
		{
			if(!response) // si no responde
				return _Kick(playerid, "Has sido expulsado por cancelar el dialogo de inicio.");
			if(isnull(inputtext)) // si responde pero no ingresa nada
				return _Dialogo(playerid, d_usuario, DIALOG_STYLE_INPUT, "> Ingreso", "Hola, usa el siguiente espacio para ingresar tu nombre de usuario.\nEn caso de no existir el sistema te permitirá crearlo.", "Aceptar", "Salir");
			if(strlen(inputtext) < 3 || strlen(inputtext) > 32) // si es menor a 3 o mayor a 32
				return _Dialogo(playerid, d_usuario, DIALOG_STYLE_INPUT, "> Ingreso", "Hola, usa el siguiente espacio para ingresar tu nombre de usuario.\nEn caso de no existir el sistema te permitirá crearlo.\nNo puede ser menor a tres caracteres o mayor a treinta y dos,", "Aceptar", "Salir");
			if(_DetectaSigno(inputtext)) // si ingresa un '='
				return _Dialogo(playerid, d_usuario, DIALOG_STYLE_INPUT, "> Ingreso", "Hola, usa el siguiente espacio para ingresar tu nombre de usuario.\nEn caso de no existir el sistema te permitirá crearlo.\nNo ingreses símbolos, únicamente letras y números.", "Aceptar", "Salir");
			new query[128];
			alm(user[playerid][uNombre], inputtext);
			mysql_format(Database, query, sizeof(query), "SELECT * FROM _Usuarios WHERE acc_Usuario = %e LIMIT 1", inputtext);
			mysql_tquery(Database, query, "_VerificarCuenta", "i", playerid);
		}
		case d_confirmacion:
		{
			if(!response) // si no responde
				return _Dialogo(playerid, d_usuario, DIALOG_STYLE_INPUT, "> Ingreso", "Hola, usa el siguiente espacio para ingresar tu nombre de usuario.\nEn caso de no existir el sistema te permitirá crearlo.", "Aceptar", "Salir");
			SetPVarInt(playerid, "tipo_ingreso", 1); // 1 = Registro, 2 = logueo
			_Dialogo(playerid, d_clave, DIALOG_STYLE_PASSWORD, "> Registro", "Ingresa en el siguiente espacio una contraseña para tu cuenta.", "Aceptar", "Salir");
		}
		case d_clave:
		{
			switch(GetPVarInt(playerid, "tipo_ingreso"))
			{
				case 1:
				{
					if(!response) // si no responde lo kickea
						return _Kick(playerid, "Has sido expulsado por cancelar el diálogo de registro.");
					if(strlen(inputtext) < 5 || strlen(inputtext) > 16) // si es menor a 5 o mayor a 16
						return _Dialogo(playerid, d_clave, DIALOG_STYLE_PASSWORD, "> Registro", "Ingresa en el siguiente espacio una contraseña para tu cuenta.\nNo debe ser menor a cinco caracteres o mayor de dieciseis.", "Aceptar", "Salir");
					if(_DetectaSigno(inputtext)) // antixploit/anti injection
						return _Dialogo(playerid, d_clave, DIALOG_STYLE_PASSWORD, "> Registro", "Ingresa en el siguiente espacio una contraseña para tu cuenta.\nNo ingreses signos.", "Aceptar", "Salir");
					DeletePVar(playerid, "tipo_ingreso"); // se elimina la PVar
					bcrypt_hash(inputtext, BCRYPT_COST, "_EncriptarClave", "i", playerid); // Se encripta la contraseña
				}
				case 2:
				{
					if(!response)
						return _Dialogo(playerid, d_usuario, DIALOG_STYLE_INPUT, "> Ingreso", "Hola, usa el siguiente espacio para ingresar tu nombre de usuario.\nEn caso de no existir el sistema te permitirá crearlo.", "Aceptar", "Salir");
					if(_DetectaSigno(inputtext)) // antixploit/anti injection
						return _Dialogo(playerid, d_clave, DIALOG_STYLE_PASSWORD, "> Iniciar sesión", "El nombre de usuario que has ingresado está registrado en nuestra base de datos, ingresa la contraseña para loguear.\n'Regresar' te llevará al menú anterior.", "Ingresar", "Regresar");
					DeletePVar(playerid, "tipo_ingreso");
					alm(user[playerid][uClave2], inputtext);
					new query[128];
					mysql_format(Database, query, sizeof(query), "SELECT acc_Clave, acc_ID FROM _Usuarios WHERE acc_Usuario = %e LIMIT 1", user[playerid][uNombre]);
					mysql_tquery(Database, query, "_CompararClaves", "i", playerid);
				}
			}
		}
	}
	return 1;
}
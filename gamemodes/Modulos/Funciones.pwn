/* 
	Módulo Sistemas/Funciones Generales
	Fecha: 14/Noviembre/2020
	by Artic / Wo0x
*/

_GetName(playerid)
{
	new name[MAX_PLAYER_NAME];
	GetPlayerName(playerid, name, sizeof name);
	for(new i = 0; i < MAX_PLAYER_NAME; i++) {
		if(name[i] == '_') name[i] = ' ';
	}
	return name;
}

_SendMessage(playerid, color, const string[]) // 
{
	new message[80];
	if(strlen(string) > 80)
	{
		format(message, sizeof message, "%.80s", string);
		SendClientMessage(playerid, color, message);
		format(message, sizeof message, "...%s", string[80]);
		SendClientMessage(playerid, color, message);
	}
	else
		SendClientMessage(playerid, color, string);

	return 1;
}

_MensajeGlobal(color, const string[])
{
	foreach(Player, i)
	{
		if(TogAdmin[i]) return 1;

		_SendMessage(i, color, string);
	}
	return 1;
}

_MsgComando(playerid, const cmd[])
{
	new string[128];
	format(string, sizeof string, "INFO: El comando introducido (/%s) no existe en la base de datos, revisa /ayuda.", cmd);
	SendClientMessage(playerid, COLOR_GRIS, string);
	return 1;
}

_KickRazon(playerid, const string[])
{
	new text[128];
	format(text, sizeof text, "Administración: {FFFFFF}%s", string);
	_SendMessage(playerid, COLOR_ROJO, text);
	SetTimerEx("_Kick", 200, false, "i", playerid);
	return 1;
}

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

_Hora()
{
	new hour, minute, second, str[32]; 
	gettime(hour, minute, second);
	format(str, sizeof(str), "%02d:%02d:%02d", hour, minute, second);
	return str;
}

funcion _ShowPlayerDialog(playerid, dialogid, style, caption[], info[], button1[], button2[])
{
	Dialogid[playerid] = dialogid;
	ShowPlayerDialog(playerid, dialogid, style, caption, info, button1, button2);
	return 1;
}

funcion _Kick(playerid)
{
	Kick(playerid);
	return 1;
}

stock alm(string[], string2[])
{
	strmid(string, string2, 0, strlen(string2), strlen(string2) + 1);
	return 1;
}

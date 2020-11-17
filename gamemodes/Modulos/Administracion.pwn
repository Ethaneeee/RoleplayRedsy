/* 
	Módulo Sistema de Administración Redsy Roleplay
	Fecha: 14/Noviembre/2020
	by Artic / Wo0x
*/
#include <YSI-Includes\YSI\y_hooks>
// — Macros mensajes
#define NoAutorizado(%1) SendClientMessage(playerid, COLOR_GRIS, %1)
#define NoDuty(%1) SendClientMessage(playerid, COLOR_ROJO, %1)

// ——————— VARIABLEs ———————//
new TogAdmin[MAX_PLAYERS];
new TogChatAdmin[MAX_PLAYERS];

// ———————— COMANDOS —————————//
CMD:kick(playerid, params[])
{
	if(user[playerid][uAdmin] < 2) return _MsgComando(playerid, "kick");
	if(user[playerid][uAdminDuty] == 0) return NoDuty("Info:{FFFFFF} Debes estar en servicio administrativo. (/aduty)");

	if(sscanf(params, "us[128]", params[0], params[1])) return SendClientMessage(playerid, COLOR_GRIS, "USO: /kick (Playerid) (Razón)");

	new string[128];
	format(string, sizeof(string), "Administración: {FFFFFF}%s (%d) ha kickeado a %s (%d), razón: %s.", user[playerid][uNombre], playerid, _GetName(params[0]), params[0], params[1]);
	foreach(Player, i)
	{
		if(TogAdmin[i] == 0) _SendMessage(i, COLOR_ROJO, string);
	}
	SetTimerEx("_Kick", 200, false, "i", params[0]);
	return 1;
}

CMD:a(playerid, params[])
{
	if(user[playerid][uAdmin] == 0) return _MsgComando(playerid, "a");

	if(sscanf(params, "s[128]", params[0])) return SendClientMessage(playerid, COLOR_GRIS, "USO: /a (Chat Staff)");

	new string[128];
	format(string, sizeof string, "(( [%s] %s (ID: %d): %s ))", _ReturnRankName(playerid), user[playerid][uNombre], playerid, params[0]);
	_MensajeAdmin(COLOR_AMARILLO, string);
	return 1;
}

CMD:ao(playerid, params[])
{
	if(user[playerid][uAdmin] == 0) return _MsgComando(playerid, "ao");
	if(user[playerid][uAdminDuty] == 0) return NoDuty("Info:{FFFFFF} Debes estar en servicio administrativo. (/aduty)");

	if(sscanf(params, "s[128]", params[0])) return SendClientMessage(playerid, COLOR_GRIS, "USO: /ao (Mensaje Administrativo)");

	new string[128];
	format(string, sizeof string, "ADMINISTRACIÓN: %s", params[0]);
	_MensajeGlobal(COLOR_ROJO, string);
	format(string, sizeof string, "De %s (%d)", user[playerid][uNombre], playerid);
	_MensajeAdmin(COLOR_ROJO, string);
	return 1;
}

CMD:ao2(playerid, params[])
{
	return 1;
}

// —————— Hook´s ———————//

hook _ResetJugador(playerid)
{
	TogAdmin[playerid] = 0;
	TogChatAdmin[playerid] = 0;
	return 1;
}

//——————— Funciones ————————//
_ReturnRankName(playerid)
{
	new rank[13], sex = user[playerid][pSexo];
	switch(user[playerid][uAdmin])
	{
		case 1: format(rank, sizeof rank, "Orientador%s", (sex == 1) ? ("") : ("a"));
		case 2: format(rank, sizeof rank, "Moderador%s", (sex == 1) ? ("") : ("a"));
		case 3: format(rank, sizeof rank, "Moderador%s II", (sex == 1) ? ("") : ("a"));
		case 4: format(rank, sizeof rank, "Game Operator");
		case 5: format(rank, sizeof rank, "Administrador%s", (sex == 1) ? ("") : ("a"));
		case 6: format(rank, sizeof rank, "Propietari%s", (sex == 1) ? ("0") : ("a"));
	}
	return rank;
}

_MensajeAdmin(color, const string[], tipo = 0)
{
	foreach(Player, i)
	{
		if(!user[i][uAdmin]) return 1;
		if(TogChatAdmin[i]) return 1;
		new msg[128];
		format(msg, sizeof msg, "Administración:{FFFFFF} %s", string);
		if(!tipo)
		{
			_SendMessage(i, color, string);
		}
		else{
			_SendMessage(i, color, msg);
		}
	}
	return 1;
}
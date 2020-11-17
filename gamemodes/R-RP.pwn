/*
Gamemode de 0, hecha por Artic#0550
*/

// —————— INCLUDES ———————//
#include <a_samp>
#include <a_mysql>
#include <bcrypt>
#include <foreach>
#include <Pawn.CMD>
#include <sscanf2>
// ——————— DEFINES ———————//
// — Colores
#define COLOR_ROJO 		0x9D2121FF // — Usado en avisos administrativos
#define COLOR_GRIS      0xC0C0C0FF // — Usado en Mensajes Generales
#define COLOR_AMARILLO  0xFFEC8BFF // — Usado en Chat Admin
// — Macros
#define funcion%0(%1) forward %0(%1); public %0(%1)
// ——————— MODULOS ——————//
#include "Modulos/Config.pwn"
#include "Modulos/General.pwn"
#include "Modulos/User.pwn"
#include "Modulos/Baneos.pwn"
#include "Modulos/Administracion.pwn"
#include "Modulos/Funciones.pwn"

main( ) { }

// —— PUBLICS ——— //

public OnPlayerConnect(playerid)
{
	_ResetJugador(playerid);

	new ip[16], info[256];
	GetPlayerIp(playerid, ip, sizeof ip);
	alm(user[playerid][uIP], ip);
	if(_VerificarBaneo(ip))
	{
		_CargarBaneoIP(playerid, ip);
		format(info, sizeof info, "\n{FFFFFF}Encargado: {9D2121}%s\n{FFFFFF}Razón: {9D2121}%s\n{FFFFFF}Fecha: {9D2121}%s\n", ban[playerid][bResponsable], ban[playerid][bRazon], ban[playerid][bFecha]);
		_ShowPlayerDialog(playerid, d_ban, DIALOG_STYLE_MSGBOX, "Información del bloqueo", info, "Aceptar", "");
		SetTimerEx("_Kick", 300, false, "i", playerid);
		return 1;
	}
	_ShowPlayerDialog(playerid, d_usuario, DIALOG_STYLE_INPUT, "Panel de inicio", "{FFFFFF}Usa el siguiente espacio para ingresar tu nombre de usuario.", "Aceptar", "Salir");
	return 1;
}

public OnGameModeInit()
{
	ConectarMYSQL();
	SendRconCommand("hostname "server_name" (v"server_version")");
	SetGameModeText("R-RP v"server_version"");
	SendRconCommand("language Español");
	SendRconCommand("mapname Los Santos");

	mysql_log(ERROR | WARNING);
	return 1;
}



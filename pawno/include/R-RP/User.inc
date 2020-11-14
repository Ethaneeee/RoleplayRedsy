enum jUser
{
	//- Cuenta
	uID, //ID en base de datos
	uNombre[32], //nombre de cuenta
	uClave[128], //clave´
	uClave2[128], //clave´
 	uIP[16], //ip al registrar
 	uRegistro[32], //fecha de registro
 	uRegistroH[16], //hora de registro
 	bool:uConectado, //conectado
 	uAdmin, // nivel admin
 	uAsignado, // rango asignado
 	upID[3], // IDs de personajes

 	//-personaje
 	pID, //ID en base de datos
 	pNombre[MAX_PLAYER_NAME], //Nombre de personaje
 	pEdad, //Edad del personaje
};
new user[MAX_PLAYERS][jUser];
new userpersonaje[MAX_PLAYERS][3][MAX_PLAYER_NAME+1], ultconexion[MAX_PLAYERS][3][64];
stock ResetPlayerVariables(playerid)
{
	user[playerid][uID] = 0;
	user[playerid][uConectado] = false;
	user[playerid][uAdmin] = 0;
	user[playerid][uAsignado] = 0;

	user[playerid][pID] = 0;
	user[playerid][pEdad] = 0;

	currentDialog[playerid] = -1;
	return 1;
}

new MySQL:Database;

enum baneos
{
	bID,
	bResponsable[MAX_PLAYER_NAME],
	bRazon[128],
	bFecha[32],
	bIP[16]
};
new InfoBan[MAX_PLAYERS][baneos];

new currentDialog[MAX_PLAYERS];
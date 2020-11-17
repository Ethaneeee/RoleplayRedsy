/* 
	Módulo Sistema de Baneos Redsy Roleplay
	Fecha: 16/Noviembre/2020
	by Artic / Wo0x
*/
enum baninfo
{
	bID, // ID SQL
	bResponsable[MAX_PLAYER_NAME], // Responsable del Ban
	bRazon[64],
	bFecha[64],
	bIP[16],
	bUsuario[MAX_PLAYER_NAME],
	bPersonaje[MAX_PLAYER_NAME],
	bTipo
}
new ban[MAX_PLAYERS][baninfo];


funcion _VerificarBaneo(ip[])
{
	new query[128];
	mysql_format(Database, query, sizeof query, "SELECT * FROM _Baneados WHERE _IP = '%e' AND _Tipo = '1';", ip);
	new Cache:CacheBan = mysql_query(Database, query);
	if(cache_num_rows())
	{
		cache_delete(CacheBan);
		return 1;
	}
	cache_delete(CacheBan);
	return 0;
}

funcion _CargarBaneoIP(playerid, ip[])
{
	new query[128], content[128];
	mysql_format(Database, query, sizeof query, "SELECT * FROM _Baneados WHERE _IP = '%e' AND _Tipo = '1';", ip);
	new Cache:CacheBan = mysql_query(Database, query);

	cache_get_value_name(0, "_Responsable", content);
	alm(ban[playerid][bResponsable], content);
	cache_get_value_name(0, "_Razon", content);
	alm(ban[playerid][bRazon], content);
	cache_get_value_name(0, "_Fecha", content);
	alm(ban[playerid][bFecha], content);
	cache_delete(CacheBan);
	return 0;
}
/* 
	Módulo Configuracion MYSQL Redsy Roleplay
	Fecha: 16/Noviembre/2020
	by Artic / Wo0x
*/
#define MYSQL_HOST "localhost"
#define MYSQL_USER "root"
#define MYSQL_PASS ""	
#define MYSQL_DB "R-RP"

new MySQL:Database;

funcion ConectarMYSQL()
{
	Database = mysql_connect(MYSQL_HOST, MYSQL_USER, MYSQL_PASS, MYSQL_DB);
	if(mysql_errno() != 0)
	{
		print("Error al conectar la base de datos proporcionada. ("MYSQL_DB")");
	}
	else
	{
		print("Conexión con la base de datos establecida.");
	}
	return 1;
}
/* 
	Módulo Cosas en general
	Fecha: 16/Noviembre/2020
	by Artic / Wo0x
*/

#define d_ban 			(1)
#define d_usuario		(2)
#define d_crear 		(3)
#define d_clave 		(4)
#define d_personajes	(5)

#define server_name 	"Redsy Roleplay"
#define server_version	"0.1"

#if defined MAX_PLAYERS
	#undef MAX_PLAYERS
#endif
#define MAX_PLAYERS 100

#define BCRYPT_COST 12

new Registro = 0;		
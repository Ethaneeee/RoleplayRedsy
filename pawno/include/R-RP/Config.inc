//- Defines
//-mysql
#define MYSQL_HOST "localhost"
#define MYSQL_USER "root"
#define MYSQL_PASS ""
#define MYSQL_DB "litz"
//-nombre
#define NOMBRE "Redsy Roleplay (v"VERSION")"
//-version
#define VERSION "0.1"
//-foro
#define URL_FORO "www.foro.com"
//-macros
#define funcion:%0(%1) forward %0(%1); public %0(%1)
#define isnull(%1) ((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
//-valor encriptador
#define	BCRYPT_COST		13
//-colores
#define COLOR_ROJO 		0x9D2121FF
//-Diálogos
#define d_ban 			(1)
#define d_usuario  		(2)
#define d_confirmacion  (3)
#define d_clave 		(4)
#define d_personajes 	(5)
//-máximos jugadores
#if defined MAX_PLAYERS
	#undef MAX_PLAYERS
#endif
#define MAX_PLAYERS 100
	
//- Anti amx
AntiAmx()
{
    new a[][] = {
        "Unarmed (Fist)",
        "Brass K"
    };
    #pragma unused a
}
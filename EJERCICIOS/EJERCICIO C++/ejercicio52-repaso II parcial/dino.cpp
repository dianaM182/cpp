#include  <stdio.h>
#include  <conio.h>
#include  <iostrea >
#include  <time.h>
#include  <windows.h>

 gotoxi nulo ( int x, int y)
{
 COORD coord;
coord. X = x;
coord. Y = y;
 SetConsoleCursorPosition ( GetStdHandle (STD_OUTPUT_HANDLE), coord);
} 
 Retardo nulo ( sin firmar  int segundos)
{
    clock_t goal = mseconds + clock ();
    while (gol> reloj ());
}
nulo  getup ()
{
    sistema ( " cls " );
    gotoxi ( 10 , 2 );
    printf ( " Presione X para salir, Presione barra espaciadora para saltar " );
    gotoxi ( 62 , 2 );
    printf ( " PUNTUACIÓN: " );
    gotoxi ( 1 , 25 );
    para ( int x = 0 ; x < 79 ; x ++)
    printf ( " ß " );
}
 
int t, velocidad = 40 ;
 ds nulo ( int jump = 0 )
{
    estática  int a = 1 ;
 
    si (salto == 0 )
        t = 0 ;
    otra cosa  si (salte == 2 )
        t--;
    de lo contrario t ++;
    gotoxi ( 2 , 15 -t);
    printf ( "                  " );
    gotoxi ( 2 , 16 -t);
    printf ( "          ÜÛßÛÛÛÛÜ " );
    gotoxi ( 2 , 17 -t);
    printf ( "          ÛÛÛÛÛÛÛÛ " );
    gotoxi ( 2 , 18 -t);
    printf ( "          ÛÛÛÛÛßßß " );
    gotoxi ( 2 , 19 -t);
    printf ( " Û ÜÛÛÛÛßßß " );
    gotoxi ( 2 , 20 -t);
    printf ( " ÛÛÜ ÜÛÛÛÛÛÛÜÜÜ " );
    gotoxi ( 2 , 21 -t);
    printf ( " ßÛÛÛÛÛÛÛÛÛÛÛ ß " );
    gotoxi ( 2 , 22 -t);
    printf ( "    ßÛÛÛÛÛÛÛß      " );
    gotoxi ( 2 , 23 -t);
    if (jump == 1 || jump == 2 ) {
    printf ( "     ÛÛß ßÛ        " );
    gotoxi ( 2 , 24 -t);
    printf ( "     ÛÜ ÛÜ       " );
    } más  si (a == 1 )
    {
    printf ( "     ßÛÛß ßßß     " );
    gotoxi ( 2 , 24 -t);
    printf ( "       ÛÜ          " );
    a = 2 ;
    }
    más  si (a == 2 )
    {
    printf ( "      ßÛÜ ßÛ       " );
    gotoxi ( 2 , 24 -t);
    printf ( "           ÛÜ      " );
    a = 1 ;
    }
    gotoxi ( 2 , 25 -t);
    if (jump! = 0 ) {
        printf ( "                 " );
    }
    más
    {
         
        printf ( " ßßßßßßßßßßßßßßßßß " );
    }
    retraso (velocidad);
}

nulo  obj ()
{
    estático  int x = 0 , scr = 0 ;
    si (x == 56 && t < 4 )
    {
    scr = 0 ;
    velocidad = 40 ;
    gotoxi ( 36 , 8 );
    printf ( " Juego terminado " );
    getch ();
    gotoxi ( 36 , 8 );
    printf ( "          " );
    }
    gotoxi ( 74 -x, 20 );
    printf ( " Û Û " );
    gotoxi ( 74 -x, 21 );
    printf ( " Û Û " );
    gotoxi ( 74 -x, 22 );
    printf ( " ÛÜÜÜÜÛ " );
    gotoxi ( 74 -x, 23 );
    printf ( "   Û     " );
    gotoxi ( 74 -x, 24 );
    printf ( "   Û   " );
    x ++;
    si (x == 73 )
    {
    x = 0 ;
    scr ++;
    gotoxi ( 70 , 2 );
    printf ( "      " );
    gotoxi ( 70 , 2 );
    printf ( " % d " , scr);
    si (velocidad> 20 )
        velocidad--;
    }
}

int  jugar ()
{
	sistema ( " modo con: líneas = 29 cols = 82 " );
    char ch;
    int i;
    getup ();
    mientras ( cierto )
    {
        mientras que (! kbhit ())
        {
            ds ();
            obj ();
        }
        ch = getch ();
        si (ch == '  ' )
        {
            para (i = 0 ; i < 10 ; i ++)
            {
            ds ( 1 );
            obj ();
            }
            para (i = 0 ; i < 10 ; i ++)
            {
            ds ( 2 );
            obj ();
            }
        }
        más  si (ch == ' x ' )
            return ( 0 );
    } 
}




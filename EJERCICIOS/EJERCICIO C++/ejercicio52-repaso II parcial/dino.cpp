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
    printf ( " PUNTUACI�N: " );
    gotoxi ( 1 , 25 );
    para ( int x = 0 ; x < 79 ; x ++)
    printf ( " � " );
}
 
int t, velocidad = 40 ;
 ds nulo ( int jump = 0 )
{
    est�tica  int a = 1 ;
 
    si (salto == 0 )
        t = 0 ;
    otra cosa  si (salte == 2 )
        t--;
    de lo contrario t ++;
    gotoxi ( 2 , 15 -t);
    printf ( "                  " );
    gotoxi ( 2 , 16 -t);
    printf ( "          �������� " );
    gotoxi ( 2 , 17 -t);
    printf ( "          �������� " );
    gotoxi ( 2 , 18 -t);
    printf ( "          �������� " );
    gotoxi ( 2 , 19 -t);
    printf ( " � �������� " );
    gotoxi ( 2 , 20 -t);
    printf ( " ��� ���������� " );
    gotoxi ( 2 , 21 -t);
    printf ( " ������������ � " );
    gotoxi ( 2 , 22 -t);
    printf ( "    ���������      " );
    gotoxi ( 2 , 23 -t);
    if (jump == 1 || jump == 2 ) {
    printf ( "     ��� ��        " );
    gotoxi ( 2 , 24 -t);
    printf ( "     �� ��       " );
    } m�s  si (a == 1 )
    {
    printf ( "     ���� ���     " );
    gotoxi ( 2 , 24 -t);
    printf ( "       ��          " );
    a = 2 ;
    }
    m�s  si (a == 2 )
    {
    printf ( "      ��� ��       " );
    gotoxi ( 2 , 24 -t);
    printf ( "           ��      " );
    a = 1 ;
    }
    gotoxi ( 2 , 25 -t);
    if (jump! = 0 ) {
        printf ( "                 " );
    }
    m�s
    {
         
        printf ( " ����������������� " );
    }
    retraso (velocidad);
}

nulo  obj ()
{
    est�tico  int x = 0 , scr = 0 ;
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
    printf ( " � � " );
    gotoxi ( 74 -x, 21 );
    printf ( " � � " );
    gotoxi ( 74 -x, 22 );
    printf ( " ������ " );
    gotoxi ( 74 -x, 23 );
    printf ( "   �     " );
    gotoxi ( 74 -x, 24 );
    printf ( "   �   " );
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
	sistema ( " modo con: l�neas = 29 cols = 82 " );
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
        m�s  si (ch == ' x ' )
            return ( 0 );
    } 
}




#include  <iostream>
#include  <cstdlib>
#include  <ctime>

using namespace std ;

int  main ( int argc, char  const * argv [])
{
    int fila=5;
    int columna=5;

    int ramdon [fila] [columna];
   
    int suma=0;
    int a=0;

    srand(time( 0 ));
    for ( int a=0; a<fila; a++)
    {
        for ( int b=0 ; b<columna; b++)
        {
            ramdon [a] [b]=rand ()% 99 + 1 ;
            cout<<" [ " <<ramdon [a] [b] << " ] " << "  " ;
            suma = suma+ramdon [a] [b];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"La suma de la matriz es:"<<suma;

    return  0 ;
}

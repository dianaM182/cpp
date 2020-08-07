#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int sumar(int a , int b)
{
    int resultado=0;
    resultado = a+b;
    
	return resultado;
}

void sumarConValorPorReferencia (int a, int & b, & resultado)
{
	a=10;
	b=12;
    resultado = a+b;
}

int main(int argc, char** argv)
 {
 	int num1=5;
 	int num2=7;
 	int r=0;
 	
 	sumarConValorPorReferencia(num1,num2,r);
 
 	cout<<num1<< num1;
	 cout<<num2<< num2;
	 cout<<r<< r;
 	
 
 	
	return 0;
}

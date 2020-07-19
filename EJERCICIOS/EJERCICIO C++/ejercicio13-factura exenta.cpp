#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	char estaExenta;
	double subtotal;
	double total;
	double impuesto=0.15;
	int descuento;
	double calculodescuento;
	double calculoimpuesto;
	
	cout<<"Ingrese el subtotal: ";
	cin>> subtotal;
	
	cout<<"Ingrese el descuento: (0, 10,15,20): ";
	cin>> descuento;
	
	cout<<"Factura Exenta? Escriba s/n:";
	cin>> estaExenta;
	
	calculodescuento=(subtotal*descuento)/100;
	calculoimpuesto=(subtotal)*0.15;
	
	if(estaExenta=='s' || estaExenta=='S')
	    {
		total=subtotal-calculodescuento;
		cout<<endl;
		cout<<"El total a pagar " <<total;
	     } 
	     else
    	{
		total= subtotal-calculodescuento+calculoimpuesto;
		cout<<endl;
		cout<<"El total a pagar : " <<total;

	    }
	    cout<<endl;
	    return 0;
}



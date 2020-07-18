#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	double subtotal=0;
	double total=0;
	double impuesto=0.15;
	int descuento=0;
	double calculodescuento=0;
	double calculoimpuesto=0;
		
	cout<<"Ingrese el subtotal: ";
	cin>> subtotal;
	
	cout<<"Ingrese el descuento: (0, 10,15,20): ";
	cin>> descuento;
	
	calculodescuento=(subtotal*descuento)/100;
	calculoimpuesto=(subtotal-calculodescuento)*0.15;
	total=subtotal-calculodescuento+calculoimpuesto;
	cout<< endl;
	cout<<"Total a pagar: " << total;
	
	return 0;
}

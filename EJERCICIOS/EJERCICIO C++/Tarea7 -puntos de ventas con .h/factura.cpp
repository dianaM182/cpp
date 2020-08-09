#include <iostream>

using namespace std;

double impuesto=0.15;
double total;
double subtotal;
string  listaproducto;

void agregarproducto(string descripcion, int cantidad, double precio)
{
	listaproducto=listaproducto+descripcion+"\n";
	subtotal=subtotal+(cantidad*precio);
	impuesto=subtotal*0.15;
	total=subtotal+impuesto;
}

void imprimirfactura()
{
	system("cls");
	cout<<"FACTURA"<<endl;
	cout<<"*******"<<endl;
	cout<<"********"<<endl;
	cout<<endl;
	
	cout<<"Productos: "<< endl;
	cout<<listaproducto<<endl;
	cout<<endl;
	
	cout<<"Impuesto:"<<impuesto<<endl;
	cout<<"Subtotal:"<<subtotal<<endl;
	cout<<"El total a pagar es:"<<total<<endl;
	
	cout<<endl;
	cout<<endl;
	system("pause");
	
}

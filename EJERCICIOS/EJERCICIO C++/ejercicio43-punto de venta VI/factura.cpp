#include <iostream>
using namespace std;

double subtotal;
void listaProducto;

void agregarproducto (int descripcion, int cantidad, double precio);
{
	listaproducto=listaproducto+descripcion+'\n';
	subtotal=subtotal+(cantidad*precio);
}

void imprimirfactura();
{
	system("cls");
	cout<<"FACTURA"<<endl;
	cout<<"*******"<<endl;
	cout<<"********"<<endl;
	
	cout<<"Productos: "<< endl;
	cout listaproducto;
	cout<<endl;
	cout<<"Subtotal:"<<subtotal;
	
}




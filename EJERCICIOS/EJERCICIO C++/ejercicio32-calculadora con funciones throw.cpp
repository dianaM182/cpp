#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
  sumar (int a, int b){
  	return a+b;
  } 
  
  int calculadora(int a, int b, char operador){
 	if (operador== '+'){
 		return sumar(a,b);
	 } 
	throw "El operador no existe ";
 } 
 
int main(int argc, char** argv) {
	
		int n1=0;
	int n2=0;
	char operador=0;
	int resultado=0;
	
	cout<<"ingrese n1: ";
	cin>>n1;
	
		cout<<"ingrese n2: ";
	cin>>n2;
	cout<<"Ingrese el operador (+ - * /): ";
	cin>> operador;
	cout<<endl;
	
	try{
		resultado =calculadora(n1,n2,operador);
	cout<<"Resultado " << n1 << "  " << operador << "   " << n2 <<" es:";
	cout<< "Resultado";	
	}
	
	catch(const char* error){
	cout<<error ;
	}
	
	
	return 0;
}


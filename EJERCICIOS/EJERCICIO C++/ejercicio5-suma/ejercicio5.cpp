#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int a=0;
	int b=0;
	int resultado;
	
	cout<<"Ingrese el valor de a:";
	cin>>a;
	
	cout<<endl;
	
	cout<<"Ingrese el valor de b:";
	cin >>b;
	
	resultado=a+b;
	cout<< "La suma de a+b es:"<<resultado;
	
	return 0;
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	double a;
	double b;
	double suma,resta,multiplicacion,division;
	 
	cout<<"Imgrese el primer numero: ";
	cin>> a;
	 
	cout<<"Ingrese el segundo valor: ";
	cin>> b;
	 	
	suma=a+b;
	resta=a-b;
	multiplicacion=a*b;
	division=a/b;
	
	cout<<"la suma de a+b=: "<< suma << endl;
	cout<<"la resta de a-b=: " << resta << endl;
    cout<<"la multiplicacion de a*b=: " << multiplicacion << endl;
	cout<<"la divicion  de a/b=: " << division << endl;
	

	
	return 0;
}

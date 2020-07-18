#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int numero=0;
	int numeroSecreto=7;
	
	cout<<"Ingrese un numero: ";
	cin>> numero;
	
	cout<<endl;
	
	if(numero>=numeroSecreto){
		
	cout<<"Adiviste el numero secreto:" << numero;
		}
		else {
			cout<<"No adivinaste";
		}

	return 0;
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int opcion=0;
	cout<<"ingrese una opcion";
	cin>>opcion;
	
	switch(opcion)
	{
		case 1:
		{
				
			cout<<"Escogiste 1:"<< endl;
			cout<<"Segunda linea opcion 1:"<< endl;
			break
		}
				case 2:
			cout<<"Escogiste 2:"<< endl;
			
			break
			
				case 2:
			cout<<"Escogiste 2:"<< endl;
			break
			
			default:
				cout<<"Ingrese una opcion del 1 a3 :"<< endl;
				break;
	}
	
	
	return 0;
}

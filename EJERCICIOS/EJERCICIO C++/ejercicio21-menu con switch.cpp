#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
		
	int opcion=0;
	
	while (true){
			system("cls");
		cout<<"*********"<< endl;
		cout<<"  Menu   "<< endl;
		cout<<"*********"<< endl;
		
		cout<< endl;
		cout<<"1. Cafe y Granitas"<< endl;
		cout<<"2. Reposteria"<<endl;
		cout<<"0. Salir"<<endl;
		
		cout<<"Ingrese una opcion del menu:";
		cin>> opcion;
		
		
		switch(opcion){
			case 1:{
				system("cls");
		     	cout<<"Esta en el menu de Cafe y Reposteria"<<endl;
		     	system("pause");
				break;
			}
			
			case 2:{
				system("cls");
			    cout<<"Esta en el menu de Reposteria"<<endl;
			    system("pause");
			    break;
			}
				
				  default:
				  	{
				  	 cout<<"Ingrese una opcion valida:(0,1,2)"<<endl;
				  	 system("pause");
					 break;
					}
				  	
		}
		
		
		
		if (opcion==0){
			break;
		}
			}
			cout<<endl;
			cout<<"Saliste del sistema";

	return 0;
}

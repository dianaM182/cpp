#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int opcion=0;
	
	while(true)
	{
		system("cls");
		cout<<"**Menu**";
		cout<<"*******";
		
		cout<<endl;
		cout<<endl;
		
		cout<<"1.Bebidas calientes"<<endl;
		cout<<"2. bebidas heladas"<<endl;
		cout<<"3.reposteria"<<endl;
		cout<<"0.salir"<<endl;
		
		cout<<endl;
		cout<<"Ingrese una opcion de 1 al 3:";
		cin>>opcion;
		
			if(opcion==0)
    	{
		break;
	   }
		
		if(opcion==1){
			system("cls");
			cout<<"******************"<<;
			cout<<"Bebidas calientes"<<;
			cout<<"*******************"<<;
			
			system("pause");
		}	
		
		
		if(opcion==2){
			system("cls");
			cout<<"******************"<<;
			cout<<"Bebidas heladas"<<;
			cout<<"*******************"<<;
			
			system("pause");
			
		}	
		
		
		if(opcion==3){
			system("cls");
			cout<<"******************"<<;
			cout<<"Reposteria"<<;
			cout<<"*******************"<<;
			
			system("pause");
		}	
		
		if(opcion<0|| opcion>3){
			system("cls");
			cout<<"Ingrese una opcion valida:"<<endl;
			system("pause");
			
		}
	}
	
	
	return 0;
}

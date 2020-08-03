#include <iostream>
 using namespace std;
 
extern void productos(int opcion);
extern void imprimifactura();

 
 void menu(){

 
 	int opcion=0;

	while(true){
		
		system("cls");
		cout<<"********";
		cout<<"**Menu**";
		cout<<"********";
		
		cout<<endl;
		
		cout<<"1.BEBIDAS CALIENTES"<<endl;
		cout<<"2.BEBIDAS FRIAS"<<endl;
		cout<<"3.REPOSTERIA"<<endl;
		cout<<"4.Imprimir factura"<<endl;
		cout<<"0.SALIR"<<endl;
		
		cin>>opcion;
		
		if(opcion == 0)
		{ 
			break;
		}
	    
	    
	    if(opcion==4){
	    	imprimi facura();
	    	else{
	    	productos(opcion);	
			}
		}

	}	
}

#include <iostream>
#include "productos.h"
#include "factura.h"

 using namespace std;
 
 void menu(){
 	int opcion=0;
	while(true)
	{
		
		system("cls");
		cout<<"********";
		cout<<"**Menu**";
		cout<<"********";
		
		cout<<endl;
		cout<<endl;
		
		cout<<"1.BEBIDAS CALIENTES"<<endl;
		cout<<"2.BEBIDAS FRIAS"<<endl;
		cout<<"3.REPOSTERIA"<<endl;
		cout<<"4.Imprimir factura"<<endl;
		cout<<"0.SALIR"<<endl;
		
		cout<<endl;
		cout<<"ingrese una opcion:";
		cin>>opcion;
		
		if(opcion == 0)
		{ 
			
			break;
		}
	    
		
	     if(opcion==4)
		 {
	    	imprimirfactura();
	    	cout<<"si ombe";
	  
	   	}  
			else
			{
			producto(opcion);
		//	imprimirfactura();
	   		 }
		producto(opcion);
	}
	   
}

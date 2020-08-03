#include <iostream>

 using namespace std;
 
 extern void agregarproducto (string descripcion, int cantidad, double precio);
 void  producto(int opcion)
 {
    system("cls");
     int opcionproducto=0;
     switch (opcion)
     {
     case 1:
      {
     	
        cout<<"BEBIDAS CALIENTES"<<endl;
        cout<<"*****************"<<endl;
        cout<<"1.Capucino"<<endl;
        cout<<"2.Expreso"<<endl;
        cin>>opcionproducto;
        
     	switch(opcionproducto)
			 {
     			case 1:
     			agregarproducto	("Capuchino",1, 40);
     			break;
     			
     			case 2:
     			agregarproducto	("Expreso",1, 30);
     			break;
     			default:
     				{
     				cout<<"opcion no valida";
     				return;
     		        break;
     		         }
			 }	
			 cout<<endl;
			 cout<<"Producto agregado:";
			 system("pause");
		 }
         break; 
     
      case 2:
     {
     cout<<"**BEBIDAS FRIAS**"<<endl;
     cout<<"*****************"<<endl;
     system("pause");
         break;
     }

     case  3:
     {
     cout<<"***REPOSTERIA***"<<endl;
     cout<<"****************"<<endl;
     system("pause");
         break;
     }
     default:
         break;
         
     }
     }
 

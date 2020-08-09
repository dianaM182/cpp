#include <iostream>
#include "factura.h"

 using namespace std;
 
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
        cout<<"3.Machiato"<<endl;
        cout<<"0.Menu Principal"<<endl;

        
        cout<<endl;
        
        cout<<"Ingrese una opcion:";
        cin>>opcionproducto;
        
     	switch(opcionproducto)
			 {
     		case 1:
     			agregarproducto	("1 Capuchino- L40.00",1,40);
     			cout<<"1 Capuchino- L40.00";
     		break;     			
     		case 2:
     			agregarproducto	("1 Expreso -L30.00",1, 30);
     			cout<<"1 Expreso -L30.00";

     		break;
     		case 3:
     			agregarproducto	("1 Machiato -L50.00",1, 50);
     				cout<<"1 Machiato -L50.00";
     		break;	
     		default:
     				{
     				cout<<"opcion no valida";
     				return;
     		        }
			}	
			 cout<<endl;
			 cout<<"Producto agregado";
			 cout<<endl;
			 system("pause");
		 }
       break; 
     
      case 2:
     {
     cout<<"**BEBIDAS FRIAS**"<<endl;
     cout<<"*****************"<<endl;
     cout<<"1.Granita de Cafe"<<endl;
     cout<<"2.Granitas de frutas"<<endl;
     cout<<"3.Refrescos"<<endl;
     cout<<"0.Menu Principal"<<endl;
     
     cout<<endl;
     
    cout<<"Ingrese una opcion:";
    cin>>opcionproducto;
        
     	switch(opcionproducto)
			{
     		case 1:
     			agregarproducto	("1 Granita de cafe- L35.00",1,35);
     			cout<<"1 Granita de cafe -L35.00";
     		break;     			
     		case 2:
     			agregarproducto	("1 Granitas de frutas -L40.00",1, 40);
     			cout<<"1 Expreso -L30.00";
     		break;
     		case 3:
     			agregarproducto	("1 Refrescos-L20.00",1, 20);
     			cout<<"1 Refrescos -L20.00";
     		break;	
     		default:
     				{
     					cout<<"opcion no valida";
     					return;
     		        }
			}	
			 cout<<endl;
			 cout<<"Producto agregado";
			 cout<<endl;
			 
     system("pause");
     }

      break;

     case  3:
     {
     cout<<"***REPOSTERIA***"<<endl;
     cout<<"****************"<<endl;
     cout<<"1.Pastel de chocolate"<<endl;
     cout<<"2.Marliado"<<endl;
     cout<<"3.Pan de banano"<<endl;
     cout<<"0.Menu Principal"<<endl;
     
        cout<<endl;
        cout<<"Ingrese una opcion:";
        cin>>opcionproducto;
        
     	switch(opcionproducto)
			 {
     		case 1:
     			agregarproducto	("1 Pastel de chocolate- L50.00",1,50);
     			cout<<"1 Pastel de chocolate -L50.00";
     			break;     			
     		case 2:
     			agregarproducto	("1 Marmoliado -L20.00",1, 20);
     			cout<<"1 Marmoliado -L20.00";
     			break;
     		case 3:
     			agregarproducto	("1 Pan de banano -L25.00",1, 25);
     			cout<<"1 Pan de banano -L25.00";
     			break;
				 	
     		default:
     				{
     					cout<<"opcion no valida";
     					return;
     		        }
			}	
			 cout<<endl;
			 cout<<"Producto agregado";
			 cout<<endl;
     		system("pause");
         break;
     }
     default:   {
					break;  
     			}
    break;

     }
}
 

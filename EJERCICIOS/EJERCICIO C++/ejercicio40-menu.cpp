 #include <iostream>
 using namespace std;
 
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
		cout<<"0.SALIR"<<endl;
		cin>>opcion;
		
		if(opcion==0){
			break;
		}
		
	}

}

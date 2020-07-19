#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		using namespace std;
	
	int a=10;
	int b=50;
	int c=70;
    
     if(a>b){
     	if(a>c){
     		cout<<"A es el mayor"; 
		 } else{
		 	cout<<"C es el mayot";
		 }
	 } else{
	 	if(b>c){
	 		cout<<"B es el mayor";
	 		
		 }else {
		 	cout<<"C es el mayor";
		 }
	 }
	return 0;
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int nota=0;
	 cout<<"Ingrese la nota que obtuvo:";
	 cin>> nota;
	 
	 if (nota>100||nota<0){
	 cout<<"ingrese una nota de 0-100:";
	 return  0;
	 }
	 if(nota >=95 && nota<=100){
	 	cout<<"Obtuviste una A:";
	 } 
	 
	 if(nota >=85 && nota<=94){
	 	cout<<"Obtuviste una B:";
	 }
	 
	 if(nota >=75 && nota<=84){
	 	cout<<"Obtuviste una C:";
	 }
	 
	 if(nota >=65 && nota<=74){
	 	cout<<"Obtuviste una D:";
	 }
	 
	 if(nota >=55 && nota<=64){
	 	cout<<"Obtuviste una E:";
	 }
	 
	 if(nota >=45 && nota<=54){
	 	cout<<"Obtuviste una F:";
	 }
	 
	 return 0;
}

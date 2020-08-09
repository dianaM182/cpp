#include <iostream>
#include "stdlib.h"
#include "conio.h"


using namespace std;
 int main()
 {
 	int n1;
 	int n2;
 	char res;
 	
 	do\
	{
 		n1=1+ (int) ((rand() / 32767.1) * 6);
 		n2=1+ (int) ((rand() / 32767.1) * 6);
 		
 		cout<<"El dado uno cayo en:" <<n1 <<endl;
		cout<<"El dado dos cayo en:"<<n2<<endl;
		
 		cout<<"La suma de los dos dados lanzados es:"<<(n1+n2)<<endl;
 		
 		cout<<"Desea lanzar de nuevo los dado S/N:";
 		cout<<endl;
 		cin>>res;
 	 } while (res=='s');
 	 getch();
 }

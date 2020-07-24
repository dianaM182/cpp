#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int pares=0;
	int impares=0;
	int total;
	
	for(int i=1; i<=10; i++)
	{
		if(i%2==0){
			pares=pares+i;
			total=impares+pares;
		}	
        else {
			impares=impares+i;
			total=impares+pares;
		}
				
		cout<<i<<" ";
	}
	

	
	cout<<endl;
	cout<<endl;
	cout<<"pares:"<<pares;
	cout<<endl;
	cout<<"impares:"<<impares;
	cout<<endl;
	cout<<"total de pares e impares:"<<total; 
	return 0;
}

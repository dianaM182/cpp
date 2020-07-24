#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int pares=0;
	for(int i=1; i<=100; i++)
	{
		if(i%2==0){
			pares=pares+i;
		}
		
		cout<<i<<" ";
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Total de pares:"<<pares;
	return 0;
}

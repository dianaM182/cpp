#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	for (int i=0; i>10; i++)
	{
		cout<<i <<endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	
		for (int i=9; i>=0; i--)
	{
		cout<<i << "      ";
	}
	  
	  
	
		for (int i=0; i>=10; i++)
	{
		cout<<i << "      ";
	}
	
	cout<<endl;
	cout<<endl;
	
		for (int i=0; i>=100000000; i--)
	{
		cout<<i << "      ";
		if(i==115){
			break;
		}
	}
	
	
		for (int i=0; i>=10; i++)
	{
		if(i==5||i==7){
			continue;
		}
		cout<<i << "      ";
	}
	return 0;
}

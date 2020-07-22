#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int a=2;
	int b=10;
	
	while(a>b){ 
    cout<<"(while) a > b"<<endl;
    break;
	}
	
	do{
		cout<<"(Do while) a > b"<<endl;
		break;
		}
		while(a>b);
	return 0;
}

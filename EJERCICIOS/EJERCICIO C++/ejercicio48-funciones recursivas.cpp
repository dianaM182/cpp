#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int numeroSecreto=7;

void adivinarNumeroSecreto(int miNumero)
{
	if(miNumero==numeroSecreto)
	{
		cout<<"Aviniaste!"<<endl;
	}
	else
	{
		cout<<"intento fallido con:"<<miNumero<<endl;
		
		int otroNumero=0;
		cout<<"Ingrese otro numero:";
		cin>>otroNumero
		adivinarNumeroSecreto(otroNumero);
	}
}

int main(int argc, cha const *argv[]) 
{
	adivinarNumeroSecreto(5);
	
	return 0;
}

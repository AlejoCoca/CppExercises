#include<iostream>
#include<conio.h>
using namespace std;
bool Esprimo(int num);
int main(){
	int n;
	cout<<"Ingrese un numero entero positivo para calcular todos los numeros primos desde 0 hasta ese numero\n";
	cin>>n;
	cout<<"\nResultado: \n";
	for(int x=2;x<=n;x++)
	{
		if(Esprimo(x))
		{
			cout<<x<<endl;
		}
	}
	return 0;
}

bool Esprimo(int x)
{
	int divisor=1, divisores=0;
	do{
	if(x % divisor == 0){
	divisores++;
	}
	divisor++;
	}while(divisor <= x);
	if(divisores <= 2){
	return true;
	}
	else
	{
		 return false;
	}
}

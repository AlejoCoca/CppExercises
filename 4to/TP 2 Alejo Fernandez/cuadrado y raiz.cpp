#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Ingrese un numero para mostrar el cuadrado y la raiz de todos los numeros enteros positivos hasta el"<<endl;
	cin>>n;
	for(int x=1;x<=n;x++)
	{
		cout<<"Numero: "<<x<<endl;
		cout<<"Cuadrado: "<<(pow (x,2))<<endl;
		cout<<"Raiz: "<<sqrt(x)<<endl<<endl;
	}
	return 0;
}

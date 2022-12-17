#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n(0),n1,n2;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>n2;
	for(int x=1;x<=n2;x++)
	{
		n=n+n1;
	}
	cout<<"Resultado de la multiplicacion: "<<n;
	return 0;
}

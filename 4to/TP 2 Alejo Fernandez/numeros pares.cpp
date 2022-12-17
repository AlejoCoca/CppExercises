#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Ingrese un numero para mostar todos los numeros pares menores a el"<<endl;
	cin>>n;
	for(int x=0;x<=n;x=x+2)
	{
		cout<<x<<" ";
	}
}

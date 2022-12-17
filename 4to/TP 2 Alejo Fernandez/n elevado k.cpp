#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n,k;
	cout<<"Ingresa un numero par"<<endl;
	cin>>n;
	cout<<"Ingresa el exponente para el numero anterior"<<endl;
	cin>>k;
	cout<<(pow (n,k));
	return 0;
}

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int x,n(0);
	cout<<"Ingrese un numero para averiguar si este es multiplo de 3"<<endl;
	cin>>x;
	while(n<x){
		n+=3;
	}
	if(n==x)
	{
		cout<<"ES MULTIPLO"<<endl;
	}
	else
	{
		cout<<"NO ES MULTIPLO"<<endl;
	}
	return 0;
}

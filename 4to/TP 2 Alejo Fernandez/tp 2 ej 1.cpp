#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int edad, edadt(0), pers(0);
	cout<<"ingresa tu edad"<<endl;
	cin>>edad;
	while(edad<21)
	{
		edadt=edadt+edad;
		pers++;
		cout<<"ingresa tu edad"<<endl;
		cin>>edad;
	}
	cout<<"Promedio= "<<float(edadt)/pers;
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{	
	int num1, num2, num3;
	cout<<"ingrese 3 numeros"<<endl;
	cout<<"escribi el primero"<<endl;
	cin>>num1;
	cout<<"escribi el segundo"<<endl;
	cin>>num2;
	cout<<"escribi el tercero"<<endl;
	cin>>num3;
	if(num1>num2)
	{
		cout<<"numeros ordenados de mayor a menor:"<<num1;
		if(num2>num3)
		{
			cout<<" "<<num2<<" "<<num3;
		}
		else
		{
			cout<<" "<<num3<<" "<<num2;
		}	
	}
	else
	{
		if(num2>num1 && num2>num3)
		{
			cout<<"numeros ordenados de mayor a menor:"<<num2;
			if(num1>num3)
			{
				cout<<" "<<num1<<" "<<num3;
			}
			else
			{
				cout<<" "<<num3<<" "<<num1;
			}
		}
		else
		{
			cout<<"numeros ordenados de mayor a menor:"<<num3;
			if(num1>num2)
			{
				cout<<" "<<num1<<" "<<num2;
			}
			else
			{
				cout<<" "<<num2<<" "<<num1;
			}
		}
	}
return 0;
}

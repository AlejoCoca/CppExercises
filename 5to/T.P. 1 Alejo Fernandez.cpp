#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Ingrese 3 numeros para que sean ordenados de menor a mayor"<<endl;
	cin>>num1;cin>>num2;cin>>num3;
	if(num1<num2)
	{
		cout<<"numeros ordenados de menor a mayor:"<<num1;
		if(num2<num3)
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
		if(num2<num1 && num2<num3)
		{
			cout<<"numeros ordenados de menor a mayor:"<<num2;
			if(num1<num3)
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
			cout<<"numeros ordenados de menor a mayor:"<<num3;
			if(num1<num2)
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

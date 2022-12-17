#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{		
	int n1, n2;
	cout<<"PONE EL PRIMER NUMERO"<<endl;
	cin>>n1;
	cout<<"PONE EL PONE EL SEGUNDO NUMERO"<<endl;
	cin>>n2;
	if(n1<n2)
	{
		for(int x=n1;x<n2;x++)
		{
			if(x%4==0)
			{
				cout<<" "<<x<<endl;
			}
		}
		cout<<"El orden es ascendente";
	}
	else
	{
		for(int x=n1;x>=n2;x--)
		{
			if(x%4==0)
			{
				cout<<" "<<x<<endl;
			}
		}
		cout<<"el orden es descendente";
	}
	return 0;
}

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n1, n2;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>n2;
	if(n1<n2)
	{
		for(int x=n1;x<=n2;x++)
		{
			cout<<char(x)<<endl;
		}
	}
	else
	{
		for(int x=n1;x>=n2;x--)
		{
			cout<<char(x)<<endl;
		}
	}
	return 0;
}

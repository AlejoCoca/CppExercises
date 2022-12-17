#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Ingrese un numero"<<endl;
	cin>>n;
	for(int x=1,k=0;x<=n;x++,k=0)
	{
		for(int z=2;z<=x;z++)
		{
			if(x%z!=0)
			{
				k++;
			}
		}
		if(k>=x-2)
		{
			cout<<" "<<x;
		}
	}
	return 0;
}

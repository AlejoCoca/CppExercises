#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int n[20],n2[20],aux=0,k=0,p=0;
	srand(time(NULL));
	for(int x=0;x<20;x++)
	{
		//cout<<"Ingrese el elemento numero "<<x+1<<" del vector"<<endl;
		//cin>>n[x];
		aux=rand()%2;
		if(aux==0)
		{
			n[x]=rand()%100;	
		}
		else
		{
			n[x]=rand()%100*-1;
		}
	}
	for(int x=0;x<20;x++)
	{
		cout<<x+1<<". ==> "<<n[x]<<endl;
	}
	for(int x=0;x<20;x++)
			{
				aux+=n[x];
			}
			cout<<"Promedio: "<<aux/20<<endl;
			for(int x=0;x<20;x++)
			{
				if(n[x]>aux/20)
				{
					n2[p]=n[x];
					p++;
				}
				else
				{
					n[k]=n[x];
					k++;
				}
			}
			cout<<"Numeros mayores al promedio: "<<endl;
			for(int x=0;x<p;x++)
			{
				cout<<n2[x]<<" ";
			}
			cout<<endl<<"Numeros menores al promedio: "<<endl;
			for(int x=0;x<k;x++)
			{
				cout<<n[x]<<" ";
			}
}

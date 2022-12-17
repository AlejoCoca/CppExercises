#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int n[20],bur,pos(0),nm(101);
	srand(time(NULL));
	for(int x=0;x<20;x++)
	{
		//cout<<"Ingrese el elemento numero "<<x+1<<" del vector"<<endl;
		//cin>>n[x];
		nm=rand()%2;
		if(nm==0)
		{
			n[x]=rand()%100;	
		}
		else
		{
			n[x]=rand()%100*-1;
		}
	}
	nm=101;
	for(int x=0;x<20;x++)
	{
		cout<<x+1<<". ==> "<<n[x]<<endl;
	}
	for(int i=0;i<20;i++)
	{
		for(int j=i;j<20;j++)
		{
			if(n[j]<nm)
			{
				nm=n[j];
				pos=j;
			}
		}
		bur=n[pos];
		n[pos]=n[i];
		n[i]=bur;
		nm=101;
	}
	for(int x=0;x<20;x++)
	{
		cout<<x+1<<". ==> "<<n[x]<<endl;
	}
}

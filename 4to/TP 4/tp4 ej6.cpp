#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int n[20],nm(0);
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
	for(int x=0;x<20;x++)
	{
		cout<<x+1<<". ==> "<<n[x]<<endl;
	}
	for(int x=0;x<20;x++)
	{
		cout<<x+1<<". ==> "<<n[x]<<endl;
	}
}

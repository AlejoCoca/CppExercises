#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[150];
	cout<<"Ingrese una palabra"<<endl;
	cin.getline(pal,100);
	for(int i=0,x=0;i<strlen(pal);i++)
	{
		if(pal[i]=='(')
		{
			x--;
		}
		else
		{
			if(pal[i]==')')
			{
				x=0;
				i++;
			}
		}
		if(x>=0)
		{
			cout<<pal[i];
		}
	}
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25];
	int lon=1;
	cout<<"Ingrese una palabra"<<endl;
	gets(pal);
	lon=strlen(pal);
	while(lon>0)
	{
		cout<<"la ultima letra de la palanra es "<<pal[lon-1]<<endl;
		cout<<"Ingrese una palabra"<<endl;
		gets(pal);
		lon=strlen(pal);
	}
	return 0;
}

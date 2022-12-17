#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25],palmax[25];
	int lon=1,lonmax=0;
	cout<<"Ingrese una palabra"<<endl;
	gets(pal);
	lon=strlen(pal);
	while(lon>0)
	{
		if(lon>lonmax)
		{
			lonmax=lon;
			strcpy(palmax,pal);
		}
		cout<<"la palabra tiene "<<lon<<" letras"<<endl;
		cout<<"Ingrese una palabra"<<endl;
		gets(pal);
		lon=strlen(pal);
	}
	cout<<"La palabra ingresada con mas letras fue '"<<palmax<<"' con "<<lonmax<<" letras";
	return 0;
}

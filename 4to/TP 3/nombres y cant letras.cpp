#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25],palmax[25];
	int lon(1),palg(0),pala(0),pal6(0),lonmax(0);
	cout<<"Ingrese un nombre"<<endl;
	cin.getline(pal,25);
	lon=strlen(pal);
	while(lon>0)
	{
		if((pal[0]=='g')||(pal[0]=='G'))
		{
			palg++;
		}
		if((pal[lon-1]=='a')||(pal[lon-1]=='A'))
		{
			pala++;
		}
		if(lon>=6)
		{
			pal6++;
		}
		if(lon>lonmax)
		{
			lonmax=lon;
			strcpy(palmax,pal);
		}
		cout<<"Ingrese otro nombre"<<endl;
		cin.getline(pal,25);
		lon=strlen(pal);
	}
	cout<<"El nombre con mas letras fue '"<<palmax<<"' con "<<lonmax<<" letras"<<endl;
	cout<<"Cantidad de nombres que empiazan con la letra G: "<<palg<<endl;
	cout<<"Cantidad de nombres que terminan con la letra A: "<<pala<<endl;
	cout<<"Cantidad de nombres que tienen mas de 6 letras: "<<pal6<<endl;
	return 0;
}

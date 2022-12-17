#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25],pal2[25];
	int lon=1,lon2=1;
	cout<<"Ingrese una su nombre y apellido"<<endl;
	cin.getline(pal,25);
	lon=strlen(pal);
	for(int x=1;x<lon;x++)
	{
		if(pal[lon-x]==' ')
		{
			pal[lon-x]='\0';
			lon2=strlen(pal);
			strcpy(pal2,pal)
		}
	}
	cout<<pal<<" ";
	return 0;
}

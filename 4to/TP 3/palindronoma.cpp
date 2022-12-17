#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25],pal2[25];
	int lon=1;
	cout<<"Ingrese una palabra"<<endl;
	cin.getline(pal,25);
	strcpy(pal2,pal);
	strrev(pal2);
	while(lon>0)
	{
		if(strcmp(pal,pal2)==0)
		{	
			cout<<"La palabra es palindroma"<<endl<<endl;
		}
		else
		{
			cout<<"La palabra no es palindroma"<<endl<<endl;;
		}
			cout<<"Ingrese una palabra"<<endl;
			gets(pal);
			lon=strlen(pal);
			strcpy(pal2,pal);
			strrev(pal2);
	}
	return 0;
}

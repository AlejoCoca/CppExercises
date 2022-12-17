#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25],aux[25],letra;
	int lon,err(0);
	cout<<"Ingrese la palabra a descubrir "<<endl;
	gets(pal);
	strcpy(aux,pal);
	for(int x=0;x!=strlen(pal);x++)
	{
		if(x<=strlen(pal))
		{
			aux[x]='*';
		}
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	}
	while(err<7)
	{
		cout<<aux<<endl;
		cout<<"errores= "<<err<<endl;
		cout<<"Ingresa una letra"<<endl;
		letra=getch();
		for(int x=0,z=0;x!=strlen(pal);x++)
		{
			if(pal[x]==letra)
			{
				aux[x]=pal[x];
			}
			else
			{
				z++;
			}
			if(z==strlen(pal))
			{
				err++;
			}
		}
		if(strcmp(pal,aux)==0)
		{
			cout<<"Ganaste"<<endl;
			cout<<"la palabra era: "<<aux<<endl;
			cout<<"tuviste "<<err<<" errores"<<endl;
			err=7;
		}
	}
	if(strcmp(pal,aux)!=0)
	{
		cout<<"Perdiste"<<endl;
		cout<<"La palabra era: "<<pal<<endl;
	}
	return 0;
}

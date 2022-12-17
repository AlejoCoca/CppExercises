#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	char opc;
	int n[20],n2[20];
	for(int x=0;x<20;x++)
	{
		cout<<"Ingrese el elemento numero "<<x+1<<" del vector"<<endl;
		cin>>n[x];
	}
	cout<<"a) Invertir el orden de los elementos del vector (el primero al final, etc)"<<endl<<"b) Colocar los elementos de posición par en un segundo vector."<<endl<<"c) Colocar los mayores a 15 en un tercer vector."<<endl<<"d) Mostrar la suma de todos los elementos."<<endl<<"e) Colocar los elementos negativos en un cuarto vector."<<endl<<"f) Calcular el Promedio"<<endl<<"g) Colocar los elementos mayores del promedio en un quinto vector y los menores en un sexto vector. "<<endl;
	opc=getch();
	switch(opc)
	{
		case'A':
		case'a':
			{
				for(int x=0,z=19,aux=0;x<z;x++,z--)
				{
					aux=n[x];
					n[x]=n[z];
					n[z]=aux;
				}
					for(int x=0;x<20;x++)
				{
					cout<<n[x]<<" ";
				}
				break;
			}
		case'B':
		case'b':
			{
				for(int x=20,z=0;x>0;x-2,z++)
				{
					n2[z]=n[x];
				}
					for(int x=0;x<10;x++)
				{
					cout<<n2[x]<<" ";
				}
				break;
			}

	}
	return 0;
}

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{  
 char nombre[30];
 int ndm(2), tm, rectm, recc, ean, eac;
 while (ndm>=1){
	cout<<endl<<"Ingrese el numero de medidor"<<endl;
	cin>>ndm;
	fflush(stdin);
	cout<<"Ingrese su nombre"<<endl;
	gets(nombre);
	cout<<"Ingrese su tipo de medidor"<<endl<<"1. para residencial 2. para comercial 3. para industrial"<<endl;
	cin>>tm;
	cout<<"Ingrese el estado anterior del medidor"<<endl;
	cin>>ean;
	cout<<"Ingrese el estado actual del medidor"<<endl;
	cin>>eac;
	if((eac-ean)>=400)
	{
		if((eac-ean)<=500)
		{
			recc=(eac-ean)*20/100;
		}
		else
		{
			if((eac-ean)<=800)
			{
				recc=(eac-ean)*25/100;
			}
			else
			{
				recc=(eac-ean)*40/100;
			}
		}
	}
	else
	{
		recc=0;
	}
	cout<<endl<<endl<<"Numero de medidor: "<<ndm<<endl;
	cout<<"Nombre del Usuario: "<<nombre<<endl;
	cout<<"Tipo de Medidor: ";
	if(tm==1)
	{
		cout<<"Residencial"<<endl;
		rectm=(eac-ean)*10/100;
	}else
	{
		if(tm==2)
		{
			cout<<"Comercial"<<endl;
			rectm=(eac-ean)*20/100;
		}else
		{
			if(tm==3)
			{
				cout<<"Industrial"<<endl;
				rectm=(eac-ean)*15/100;
			}
			else
			{
				cout<<"opcion incorrecta";
			}
		}
	}
	cout<<endl<<"["<<endl<<"Datos Detallados del Medidor:"<<endl;
	cout<<"Estado Anterior del Medidor: "<<ean<<"Kw/h"<<endl;
	cout<<"Estado Actual del Medidor: "<<eac<<"Kw/h"<<endl;
	cout<<"Consumo Durante el Periodo: "<<eac-ean<<"Kw/h"<<endl;
	cout<<"Valor del Consumo: $"<<(eac-ean)*0.19<<endl;
	cout<<"Valor de Recargo por Tipo de Consumo: $"<<rectm*0.19<<endl;
	cout<<"Recargo por Cantidad de Consumo: $"<<recc*0.19<<endl;
	cout<<"Valor Total: $"<<((eac-ean)+rectm+recc)*0.19<<endl<<"]"<<endl;
	}
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float dato1, dato2;
	char calculo;
	cout<<"escriba un numero"<<endl;
	cin>>dato1;
	cout<<"seleccione una operacion"<<endl<<"suma = +"<<endl<<"resta = -"<<endl<<"Multiplicacion = *"<<endl<<"Divicion = /"<<endl;
	cout<<"raiz = r"<<endl<<"potencia = p"<<endl;
	calculo = getch();
	switch(calculo)
	{
		case'+':
		{
			cout<<"ingrese otro numero"<<endl;
			cin>>dato2;
			cout<<dato1<<" + "<<dato2<<" = "<<dato1+dato2<<endl;
			break;
		}
		case'-':
		{
			cout<<"ingrese otro numero"<<endl;
			cin>>dato2;
			cout<<dato1<<" - "<<dato2<<" = "<<dato1-dato2<<endl;
			break;
		}
		case'*':
		{	
			cout<<"ingrese otro numero"<<endl;
			cin>>dato2;
			cout<<dato1<<" * "<<dato2<<" = "<<dato1*dato2<<endl;
			break;
		}
		case'/':
		{
			cout<<"ingrese otro numero"<<endl;
			cin>>dato2;
			cout<<dato1<<" / "<<dato2<<" = "<<dato1/dato2<<endl;
			break;
		}
		case'r':
		{
			cout<<"raiz de "<<dato1<<" = "<<sqrt(dato1)<<endl;
			break;
		}
		case'p':
		{
			cout<<"ingrese el exponente"<<endl;
			cin>>dato2;
			cout<<dato1<<" elevado a la "<<dato2<<" = "<<pow(dato1,dato2)<<endl;
			break;
		}
		default:
		{
			cout<<"operacion no valida";
		}
	}
	return 0;
}

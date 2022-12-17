#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool frenar=false;
	float dato1, dato2;
	char calculo;
	while(frenar==false)
    {
	cout<<"escriba un numero"<<endl;
	cin>>dato1;
	cout<<"seleccione una operacion"<<endl<<"suma = +"<<endl<<"resta = -"<<endl<<"Multiplicacion = *"<<endl<<"Divicion = /"<<endl;
	cout<<"raiz = r"<<endl<<"expoente = e"<<endl;
	calculo = getch();
	if(calculo=='+')
	{
	cout<<"ingrese otro numero"<<endl;
	cin>>dato2;
	cout<<dato1<<" + "<<dato2<<" = "<<dato1+dato2<<endl;
	}
	else
{
	if(calculo=='-')
	{
	cout<<"ingrese otro numero"<<endl;
	cin>>dato2;
	cout<<dato1<<" - "<<dato2<<" = "<<dato1-dato2<<endl;
	}
	else
	{
		if(calculo=='*')
		{
		cout<<"ingrese otro numero"<<endl;
		cin>>dato2;
		cout<<dato1<<" * "<<dato2<<" = "<<dato1*dato2<<endl;
		}
		else
		{

			if(calculo=='/')
			{
			cout<<"ingrese otro numero"<<endl;
			cin>>dato2;
			cout<<dato1<<" / "<<dato2<<" = "<<dato1/dato2<<endl;
			}
			else
			{

				if(calculo=='r')
				{
				cout<<"raiz de "<<dato1<<" = "<<sqrt(dato1)<<endl;
				}
				else
				{
					if(calculo=='e')
					{
					cout<<"ingrese el exponente"<<endl;
					cin>>dato2;
					cout<<dato1<<" elevado a la "<<dato2<<" = "<<pow(dato1,dato2)<<endl;
					}
					else
                    {

                           frenar=true;

					}
				}
			}
		}
	}
}
}
	return 0;
}

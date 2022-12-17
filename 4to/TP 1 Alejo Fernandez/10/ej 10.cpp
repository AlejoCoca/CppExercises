#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	float preg, resp;
	cout<<"Ingrese la cantidad de preguntas"<<endl;
	cin>>preg;
	cout<<"Ingrese la cantidad de respuestas correctas"<<endl;
	cin>>resp;
	cout<<"Su nota es: ";
	preg=resp*100/preg;
	if(preg<=40)
	{
		cout<<"Mala";
	}
	else
	{
		if(preg<=60)
		{
			cout<<"Regular";
		}
		else
		{
			if(preg<=90)
			{
				cout<<"Buena";
			}
			else
			{
				if(preg<=99)
				{
					cout<<"Muy Buena";
				}
				else
				{
					cout<<"Exelente";
				}
			}
		}
	}
	cout<<endl<<"Entre el 0% y el 40%: Mala"<<endl<<"Entre el 40% y el 60%: Regular"<<endl<<"Entre el 60% y el 90%: Buena"<<endl<<"Entre el 90% y el 99%: Muy Buena"<<endl<<"100%: Exelente";
	return 0;
}

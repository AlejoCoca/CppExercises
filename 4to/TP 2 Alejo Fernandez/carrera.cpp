#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	char nom[35];
	int ndi,e,t,tt(0),p(1),cvete(0),cmayor(0),cjuve(0),ccade(0),mjvete(999),mjmayor(999),mjjuve(999),mjcade(999);
	cout<<"Ingrese el numero de inscriptos a la carrera"<<endl;
	cin>>ndi;
	while(p<=ndi){
		cout<<endl<<"Ingrese su nombre y su apellido"<<endl;
		gets(nom);
		cout<<"Ingrese su tiempo (en minutos)"<<endl;
		cin>>t;
		tt=tt+t;
		cout<<"Ingrese su edad"<<endl;
		cin>>e;
		if(e>12)
		{
			if(e<18)
			{
				ccade++;
				if(t<mjcade)
				{
					mjcade=t;
				}
			}
			else
			{
				if(e<21)
				{
					cjuve++;
					if(t<mjjuve)
					{
						mjjuve=t;
					}
				}
				else
				{
					if(e<35)
					{
						cmayor++;
						if(t<mjmayor)
						{
							mjmayor=t;
						}
					}
					else
					{
						cvete++;
						if(t<mjvete)
						{
							mjvete=t;
						}
					}
				}
			}
		}
		p++;
	}
	cout<<"Cantidad de competidores por categoria:"<<endl;
	cout<<"Veterano: "<<cvete<<endl;
	cout<<"Mayor: "<<cmayor<<endl;
	cout<<"Juvenil: "<<cjuve<<endl;
	cout<<"Cadete: "<<ccade<<endl<<endl;
	cout<<"Tiempo promedio de la carrera: "<<tt/p<<endl<<endl;
	cout<<"Mejor tiempo de cada categoria:"<<endl;
	cout<<"Veterano: "<<mjvete<<endl;
	cout<<"Mayor: "<<mjmayor<<endl;
	cout<<"Juvenil: "<<mjjuve<<endl;
	cout<<"Cadete: "<<mjcade<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
 class CPersona
 {
  	private: 
  	
	   string nombre;
	   int edad;
	   long DNI;
	   char genero;
	   int peso;
	   int altura;
	   
	public:  
		CPersona(string nom, int ed, long dni, char gen, float pe, float alt);
	void setNombre(string nom);
	void setEdad (int ed);
	void setDNI(long dni);
	void setGenero(char gen);
	void setPeso(float pe);
	void setAltura(float alt);	
	int calcularIMC();
	bool esMayorDeEdad();
	void comprobarSexo();
	string getNombre();
	int getEdad();
	
};

CPersona::CPersona(string nom, int ed, long dni, char gen, float pe, float alt)
{
	setNombre(nom);
	setEdad(ed);
	setDNI(dni);
	setGenero(gen);
	setPeso(pe);
	setAltura(alt);
}

void CPersona::setNombre(string nom)
{
	nombre=nom;
}

void CPersona::setEdad(int ed)
{
	edad=ed;
}

void CPersona::setDNI(long dni)
{
	DNI=dni;
}

void CPersona::setGenero(char gen)
{
	genero=gen;
}

void CPersona::setPeso(float pe)
{
	peso=pe;
}

void CPersona::setAltura(float alt)
{
	altura=alt;
}

string CPersona::getNombre()
{
	return nombre;
}

int CPersona::getEdad()
{
	return edad;
}

int CPersona::calcularIMC()
{
	int result;
	result=peso/(altura^2);
	if(result<20)
	{
		return -1;
	}
	else
	{
		if(result>=20 && result<=25)
		{
			return 0;
		}
		else if (result>25)
		{
			return 1;
		}
	}
}

bool CPersona::esMayorDeEdad()
{
	if(edad>18)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void CPersona::comprobarSexo()
{
	if(genero!='H'&& genero!='h'&& genero!='M' && genero!='m')
	{
		genero='H';
	}
}

int main()
{
	string nombre;
	int edad;
	long dni=30201203;
	char genero;
	float peso, altura;
	cout<<"Ingrese el nombre"<<endl;
	getline(cin,nombre);
	cout<<"Ingresa la edad"<<endl;
	cin>>edad;
	cout<<"Ingresa el DNI"<<endl;
	cin>>dni;
	cout<<"Escribe el genero (H o M)"<<endl;
	cin>>genero;
	cout<<"Escibe el peso"<<endl;
	cin>>peso;
	cout<<"Escibe la altura"<<endl;
	cin>>altura;
	CPersona persona1(nombre, edad, dni, genero, peso, altura);
	persona1.comprobarSexo();
	
	int const IMC=persona1.calcularIMC();
	switch(IMC)
	{
		case -1:
			{
				cout<<persona1.getNombre()<<" tiene un peso por debajo del normal"<<endl;
				break;
			}
		case 0:
			{
				cout<<persona1.getNombre()<<" tiene un peso normal"<<endl;
				break;
			}
		case 1:
			{
				cout<<persona1.getNombre()<<" tiene un peso superior al normal"<<endl;
				break;
			}
	}
	
	if(persona1.esMayorDeEdad())
	{
		cout<<persona1.getNombre()<<" es mayor de edad porque tiene "<<persona1.getEdad()<<" anios"<<endl;
	}
	else
	{
		cout<<persona1.getNombre()<<" no es mayor de edad porque tiene "<<persona1.getEdad()<<" anios"<<endl;
	}
	
	return  0;
}

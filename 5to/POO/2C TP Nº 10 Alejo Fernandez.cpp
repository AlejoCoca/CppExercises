#include <bits/stdc++.h>
using namespace std;
 class CPassword
 {
  	private: 
  		
  		int longitud;
		char *contrasenia;
	   
	public:  
		CPassword(int n);
	void generarPassword();
	bool esFuerte();
	void setLongitud(int n);
	int getLongitud();
	char* getContrasenia();
	
};

CPassword::CPassword(int n)
{
	setLongitud(n);
}

void CPassword::generarPassword()
{
	contrasenia= new char[longitud]; //se le asigna a la contraseña el largo que ingreso el usuario
	srand(time(NULL));
    for(int i=0; i < longitud; i++)
    {
		switch(rand()%7)
    	{
    		case 0:{
    			contrasenia[i] = 97 + rand() % (25);// esta opareacion crea una letra minuscula
				break;
			}
			case 1:
			case 2:{
				contrasenia[i] = 65 + rand() % (25);// esta opareacion crea una letra mayuscula
				break;
			}
			case 3:
			case 4:
			case 5:
			case 6:{
				contrasenia[i] = 48 + rand() % (9);// esta opareacion crea un numero
				break;
			}
		}
	}
	contrasenia[longitud]='\0'; // se indica el final del array para evitar errores
}

bool CPassword::esFuerte()
{
	int May=0, Min=0, Num=0;
	for(int i=0; i<longitud; i++)
	{
		if(contrasenia[i]>48 && contrasenia[i]<57)
		{
			Num++;
		}
		else
		{
			if(contrasenia[i]>65 && contrasenia[i]<90)
			{
				May++;
			}
			else
			{
				Min++;
			}
		}
	}
	if(Num>5 && May>2 && Min>1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void CPassword::setLongitud(int n)
{
	longitud=n;
}

int CPassword::getLongitud()
{
	return longitud;
}

char* CPassword::getContrasenia()
{
	return contrasenia;
}

int main()
{
	int longi;
	cout<<"Ingrese la longitud"<<endl;
	cin>>longi;
	CPassword password1(longi);
	password1.generarPassword();
	cout<<endl<<"La contrasenia es: "<<password1.getContrasenia()<<endl;
	cout<<"Tiene una longitud de "<<password1.getLongitud()<<" caracteres"<<endl;
	if(password1.esFuerte())
	{
		cout<<"La contrasenia es fuerte porque tiene mas de 6 numeros, mas de 2 mayusculas y mas de 1 minuscula"<<endl;
	}
	else
	{
		cout<<"La contrasenia no es fuerte"<<endl;
	}
	
	return  0;
}

#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
 class CAhorcado
 {
  	private: 
  	
		string palabra;
		int vidas;
		int puntos;
	   
	public:  
		CAhorcado (string pal, int vid, int pun);	
	void EstaenPalabra (char letra, string &asterisco, string &erroneo);
	string Pista (string asteriscos);
	int GetVidas();
	int GetPuntos();
	string GetPalabra();
};

CAhorcado::CAhorcado(string pal, int vid, int pun)
{
	palabra=pal;
	vidas=vid;
	puntos=pun;
}

void CAhorcado::EstaenPalabra(char letra, string &asterisco, string &erroneo)
{
	bool esta, repetido;
	for(int i=0;i<palabra.size();i++)
	{
		if(palabra[i]==letra && asterisco[i]!=letra)
		{
			asterisco[i]=letra;
			esta=true;
		}
	}
	if(!esta)
	{
		for(int i=0;i<erroneo.size();i++)
		{
			if(erroneo[i]==letra)
			{
				puntos-=40;
				repetido=true;
				break;
			}
		}
		if(!repetido)
		{
			puntos-=20;
		}
		vidas-=1;
		erroneo+='-';
		erroneo+=letra;
	}
	else
	{
		puntos+=20;
	}
}

string CAhorcado::Pista(string asteriscos)
{
	for(int i=0; i<asteriscos.size();i++)
	{
		if(asteriscos[i]=='*')
		{
			asteriscos[i]=palabra[i];
			puntos-=50;
			break;
		}
	}
	return asteriscos;
}

int CAhorcado::GetVidas()
{
	return vidas;
}

int CAhorcado::GetPuntos()
{
	return puntos;
}

string CAhorcado::GetPalabra()
{
	return palabra;
}

int main()
{
	string pal, asterisco, erroneo;
	string paises[]={"ARGENTINA", "URUGUAY", "PARAGUAY", "BRASIL", "CHILE", "MEXICO", "FRANCIA", "ALEMANIA", "ITALIA", "CHINA", "JAPON", "RUSIA", "COLOMBIA", "CANADA", "AUSTRALIA", "NORUEGA", "INGLATERRA", "PORTUGAL", "GRECIA","MARRUECOS", "ISRAEL", "PERU", "AUSTRIA", "HUNGRIA", "POLONIA", "IRAK", "IRAN", "INDIA", "SUECIA", "SUIZA", "BELGICA", "EGIPTO"};
	char letra;
	cout<<endl;
	srand(time(NULL));
	pal=paises[rand()%33];
	CAhorcado ahorcado1(pal, 7, 100);
	asterisco=pal.assign(pal.size(),'*');
	while(ahorcado1.GetVidas()>0 && asterisco!=ahorcado1.GetPalabra())
	{
		cout<<asterisco<<endl<<endl;
		
		cout<<"Vidas: "<<ahorcado1.GetVidas()<<endl;
		cout<<"Puntos: "<<ahorcado1.GetPuntos()<<endl;
		cout<<"Letras erroneas: "<<erroneo<<endl;
		cout<<"Ingresa una letra	(ingresa '+' para obtener una pista)"<<endl;
		letra=getch();
		letra=toupper(letra);
		cout<<endl;
		if(letra=='+')
		{
			asterisco=ahorcado1.Pista(asterisco);
		}
		else
		{
			ahorcado1.EstaenPalabra(letra, asterisco, erroneo);
		}
	}
	if(asterisco==ahorcado1.GetPalabra())
	{
		cout<<"Ganaste, la palabra era: "<<ahorcado1.GetPalabra()<<endl;
		cout<<"Te quedaban "<<ahorcado1.GetVidas()<<" vidas"<<endl;
		cout<<"Tu puntuacion final es de "<<ahorcado1.GetPuntos()<<" puntos"<<endl;
	}
	else
	{
		cout<<"Perdiste, te quedaste sin vidas"<<endl;
		cout<<"La palabra era: "<<ahorcado1.GetPalabra()<<endl;
	}
	
	return  0;
}


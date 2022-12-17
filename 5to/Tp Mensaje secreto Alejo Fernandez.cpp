#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
bool SepuedeLeer(string palabra, string base);
char sentido;
int main()
{
	string palabra, base;
	cout<<"Ingrese la cadena base de caracteres"<<endl;
	getline(cin,base);
	cout<<"Ingrese la palabra secretra"<<endl;
	getline(cin,palabra);
	if(SepuedeLeer(palabra, base)==true)
	{
		cout<<"SI"<<endl;
		cout<<sentido<<endl;
	}
	else{
		cout<<"NO";
	}
}

bool SepuedeLeer (string p, string b)
{
	for(int i=0;i<b.size();i++)
	{
		if(b[i]==p[0])
		{
			for(int x=0,z=0;z==0;x++)
			{
				if(b[i+x]!=p[x])
				{
					z=1;
				}
				if(x==p.size())
				{
					sentido='D';
					return true;
				}
			}
			for(int x=0,z=0;z==0;x++)
			{
				if(b[i-x]!=p[x])
				{
					z=1;
				}
				if(x==p.size())
				{
					sentido='I';
					return true;
				}
			}
		}
	}
}

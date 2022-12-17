#include<bits/stdc++.h>

using namespace std;

vector<string> Generar_vector (vector<string> vec);
void Calcular_partidos (vector <int> &vecA, vector <int> &vecB, vector<string> partidos);
void Mostrar_vector (vector <int> resultadosA, vector <int> resultadosB, vector<string> partidos);

int main (){
	vector<int> resultadosA, resultadosB;
    vector<string> partidos;
    cout<<"Digite los resultados de los partidos"<<endl;
    partidos=Generar_vector(partidos);
    cout<<"\nLos resultados de los partidos en numeros son:"<<endl;
    Calcular_partidos(resultadosA, resultadosB, partidos);
    Mostrar_vector(resultadosA, resultadosB, partidos);

    return 0;
}

vector<string> Generar_vector(vector<string> vec)
{
	string part;
	for(int i=0;part.length()!=1 && part[0]!='F';i++)
	{
		getline(cin,part);
		vec.push_back(part);
	}
	vec.pop_back();
	return vec;
}

void Calcular_partidos (vector <int> &resultadosA, vector <int> &resultadosB, vector<string> partidos)
{
	for(int i=0;i<partidos.size();i++)
	{
		resultadosA.push_back(0);
		resultadosB.push_back(0);
		for(int x=0;partidos[i][x]!='F';x++)
		{
			if(partidos[i][x]=='A' && partidos[i][x-1]!='B')
			{
				resultadosA[i]++;
			}
			else
			{
				if(partidos[i][x]=='B')
				{
					if(partidos[i][x-1]=='B' ||partidos[i][x-1]!='A' && i+1==partidos.size())
					resultadosB[i]++;
				}
			}
		}
	}
}

void Mostrar_vector(vector <int> vecA, vector <int> vecB, vector<string> partidos)
{
	for(int i=0;i<partidos.size();i++)
	{
		if(i+1!=partidos.size())
		{
			cout<<endl;
		}
		else
		{
			cout<<" ";
		}
		cout<<vecA[i]<<"-"<<vecB[i];
	}
	cout<<endl;
}


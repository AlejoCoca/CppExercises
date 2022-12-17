#include<bits/stdc++.h>

using namespace std;

vector<string> Generar_vector (vector<string> vec, int cant);
vector<string> CambiarNombres (vector<string> nom1);
void Mostrar_vector (vector<string> vec);

int main (){
	int cant;
    vector<string> nombres;
    cout<<"Que cantidad de nombres quiere traducir?"<<endl;
    cin>>cant;
    cout<<"Escriba los nombres"<<endl;
    nombres=Generar_vector(nombres, cant);
    nombres=CambiarNombres(nombres);
    cout<<"\nLos nombres japonizados son:"<<endl;
    Mostrar_vector(nombres);

    return 0;
}

vector<string> Generar_vector(vector<string> vec,int cant)
{
	string nom;
	for(int i=0;i<=cant;i++)
	{
		getline(cin,nom);
		vec.push_back(nom);
	}
	return vec;
}

vector<string> CambiarNombres (vector<string> nom1){
    vector<string> nom2;
    string str="";
    for(int i=1;i<nom1.size() ;i++)
		{
			for(int x=0;x<nom1[i].size();x++)
			{
				switch(nom1[i][x])
				{
					case' ':
					case'A':
					case'a':
					case'E':
					case'e':
					case'I':
					case'i':
					case'O':
					case'o':
					case'U':
					case'u':
					case'N':
					case'n':{
						str+=nom1[i][x];
						break;
					}	
					default:{
						switch(nom1[i][x+1])
						{
							case'A':
							case'a':
							case'E':
							case'e':
							case'I':
							case'i':
							case'O':
							case'o':
							case'U':
							case'u':
							case'N':
							case'n':{
								str+=nom1[i][x];
								break;
							}	
							default:{
								str+=nom1[i][x];
								str+='u';
								break;
							}
						}
						break;
					}
				}
			}
			nom2.push_back(str);
			str="";
        }
    return nom2;
}

void Mostrar_vector(vector<string> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<"Konnichi wa, "<<vec[i]<<"-san"<<endl;
	}
	cout<<endl;
}


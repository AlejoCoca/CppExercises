#include<bits/stdc++.h>
using namespace std;

vector<int> Generar_vector(vector<int> vec);
bool HayRepetidos (vector<int> vec);
void Mostrar_vector(vector<int> vec);

int main(){
	vector<int> A;
	A=Generar_vector(A);
	Mostrar_vector(A);
	if (HayRepetidos(A))
	{
		cout<<"Hay repetidos";
	}
	else{
		cout<<"No hay repetidos";
	}
	
	return 0;
}

vector<int> Generar_vector(vector<int> vec)
{
	srand(time(NULL));
	for(int i=0;i<100;i++)
	{
		vec.push_back(rand()%100000);
	}
	sort(vec.begin(), vec.end());
	return vec;
}

bool HayRepetidos (vector<int> vec)
{
	for(int i=0;i<100;i++)
	{
		if(vec[i] == vec[i+1])
		{
			return true;
		}
	}
}

void Mostrar_vector(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
}

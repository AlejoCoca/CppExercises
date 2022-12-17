#include<bits/stdc++.h>
using namespace std;
vector<int> Generar_vector(vector<int> &vec, int n);
bool HayRepetidos(vector<int> vec);
void Mostrar_vector(vector<int> vec);

int main() {
	 vector<int> A,B,C;
	A=Generar_vector(A,10);
	B=Calcular_Pares_vector(A,B);
 	cout<<"Numeros Vector A"<<endl;
	Mostrar_vector(A);
	cout<<endl;
	cout<<"Numeros Pares --- Vector B"<<endl;
	Mostrar_vector(B);
	cout<<endl;
	C=B;
	Mostrar_vector(C);
	return 0;
}

vector<int> Generar_vector(vector<int> &vec, int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		vec.push_back(rand()%100);
	}
	return vec;
}


{
	for(int i=0;i<vec.size();i++)
	{
		if (vec[i]%2==0)
		{
			aux.push_back(vec[i]);
		}
	}
	return aux;
}

void Mostrar_vector(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
}

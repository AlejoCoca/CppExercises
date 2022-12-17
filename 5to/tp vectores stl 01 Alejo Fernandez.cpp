#include<bits/stdc++.h>//para usar lodas las librerias
using namespace std;

vector<int> Generar_vector(vector<int> &vec, int n);//PASAJE POR REFERENCIA
vector<int> Calcular_Pares_vector(vector<int> vec,vector<int> &aux);
void Mostrar_vector(vector<int> vec);

int main(int argc, char** argv) {
 
    int n;	

	 vector<int> A;// declaro vector A
	 vector<int> B;// declaro vector B
	 
	A=Generar_vector(A,10); // Generero el vector A
	B=Calcular_Pares_vector(A,B);//El vector B toma los elementos pares del vector A
 	cout<<"Numeros Vector A"<<endl;
	Mostrar_vector(A);
	
	cout<<endl;
	cout<<"Numeros Pares --- Vector B"<<endl;
	Mostrar_vector(B);
	 
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

vector<int> Calcular_Pares_vector(vector<int> vec,vector<int> &aux)
{
	for(int i=0;i<vec.size();i++)
	{
		if (vec[i]%2!=0)
		{
			aux.push_back(vec[i]);
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

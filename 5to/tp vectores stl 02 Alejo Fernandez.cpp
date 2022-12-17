#include<bits/stdc++.h>
using namespace std;

vector<int> Generar_vector(vector<int> &vec, int n);
float Calcular_promedio(int suma, int n);
vector<int> Mayores_promedio(vector<int> vec, vector<int> &vecp, float prom);
int Multiplos(vector<int> vec);
int Suma(vector<int> vec);
vector<int> Multiplicar_vector(vector<int> vec, vector<int> &vecm);
void Mostrar_vector(vector<int> vec);

int main(int argc, char** argv) {
	
    int n, mult, suma;
	float prom;	
	vector<int> A;
	vector<int> B;
	vector<int> C;
	cout<<"ingrese la cantidad de elementos que desea que tenga el vector"<<endl;
	cin>>n;
	A=Generar_vector(A,n);
	suma=Suma(A);
	prom=Calcular_promedio(suma,n);
	B=Mayores_promedio(A,B,prom);
	mult=Multiplos(A);
	C=Multiplicar_vector(A,C);
 	cout<<"Numeros Vector A"<<endl;Mostrar_vector(A);
 	cout<<"Promedio: "<<prom<<endl;
 	cout<<"Elementos mayores al promedio: "<<endl;Mostrar_vector(B);
 	cout<<"Elementos multiplos de 2 y 3: "<<mult<<endl;
 	cout<<"Suma de todos los elementos: "<<suma<<endl;
 	cout<<"Numeros del vector A multiplicados por 2"<<endl;Mostrar_vector(C);

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

int Suma(vector<int> vec)
{
	int s;
	for(int i=0;i<vec.size();i++)
	{
		s+=vec[i];
	}
	return s;
}

float Calcular_promedio(int suma, int n)
{
	float prom;
	prom=suma/n;
	return prom;
}

vector<int> Mayores_promedio(vector<int> vec, vector<int> &vecp, float prom)
{
	for(int i=0;i<vec.size();i++)
	{
		if (vec[i]>prom)
		{
			vecp.push_back(vec[i]);
		}
	}
	return vecp;
}

int Multiplos(vector<int> vec)
{
	int m;
	for(int i=0;i<vec.size();i++)
	{
		if (vec[i]%2==0 && vec[i]%3==0)
		{
			m++;
		}
	}
	return m;
}

vector<int> Multiplicar_vector(vector<int> vec, vector<int> &vecm)
{
	for(int i=0;i<vec.size();i++)
	{
		vecm.push_back(vec[i]*2);
	}
	return vecm;
}

void Mostrar_vector(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
}

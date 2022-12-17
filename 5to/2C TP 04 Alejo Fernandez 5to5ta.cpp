#include<bits/stdc++.h>
using namespace std;

vector<int> Generar_vector(vector<int> vec);
bool CompararVec(vector<int> vec1, vector<int> vec2);
void Mostrar_vector(vector<int> vec);

int main(){
	int val, num=10;
	string str=" ";
	stringstream ss;
	ss<<num;
	ss>>str;
	cout<<str;
	cout<<"Escribe la cantidad total de casos que quieres ingresar"<<endl;
	cin>>val;
	for(int i=0;i<val;i++)
	{
		vector<int> A, B;
		cout<<"Ingresa la parte superior de la dentadura"<<endl;
		A=Generar_vector(A);
		cout<<"Ingresa la parte inferior de la dentadura"<<endl;
		B=Generar_vector(B);
		Mostrar_vector(A);
		Mostrar_vector(B);
		if (CompararVec(A, B))
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"SI"<<endl;
		}
		A.clear();
		B.clear();
	}
	
	return 0;
}

vector<int> Generar_vector(vector<int> vec)
{
	for(int i=0, n ;i<6;i++)
	{
		cin>>n;
		vec.push_back(n);
	}
	return vec;
}

bool CompararVec(vector<int> vec1, vector<int> vec2)
{
	for(int i=0;i<5;i++)
	{
		if((vec1[i] + vec2[i]) != (vec1[i+1] + vec2[i+1]))
		{
			return true;
		}
	}
}

void Mostrar_vector(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i];
	}
	cout<<endl;
}

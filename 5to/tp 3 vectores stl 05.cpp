#include<bits/stdc++.h>
using namespace std;

void CargaVec(vector<int> &vec); 
bool CompararVec(vector<int> vec1, vector<int> vec2);
void Mostrar_vector(vector<int> vec);

int main(){
	vector<int> A;
	vector<int> B;
	cout<<"Ingresa el primer vector de 5 elementos"<<endl;
	CargaVec(A);
	cout<<"Ingresa el segundo vector de 5 elementos"<<endl;
	CargaVec(B);
	if(CompararVec(A, B)){
		cout<<"Los vectores son iguales"<<endl;
	}
	else{
		cout<<"Los vectores no son iguales"<<endl;
	}
	
	return 0;
}

void CargaVec(vector<int> &vec)
{
	for(int i=0, n ;i<5;i++)
	{
		cin>>n;
		vec.push_back(n);
	}
}

bool CompararVec(vector<int> vec1, vector<int> vec2)
{
	if(vec1 == vec2)
	{
		return true;
	}
	else{
		return false;
	}
}

void Mostrar_vector(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
}

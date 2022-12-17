#include<bits/stdc++.h>
using namespace std;

vector<int> Generar_vector(vector<int> vec);
bool BuscarVal(vector<int> &vec, int val);

int main(){
	int val;
	vector<int> A;
	cout<<"Ingresa el vector de 8 elementos"<<endl;
	A=Generar_vector(A);
	cout<<"Ingresa el valor"<<endl;
	cin>>val;
	if (BuscarVal(A, val))
	{
		cout<<"El valor si se encuentra en el vector";
	}
	else{
		cout<<"El valor no se encuentra en el vector";
	}
	
	return 0;
}

vector<int> Generar_vector(vector<int> vec)
{
	for(int i=0, n ;i<8;i++)
	{
		cin>>n;
		vec.push_back(n);
	}
	return vec;
}

bool BuscarVal(vector<int> &vec, int val)
{
	for(int i=0;i<8;i++)
	{
		if(vec[i] == val)
		{
			return true;
		}
	}
}

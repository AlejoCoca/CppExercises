#include<bits/stdc++.h>
using namespace std;

vector<string> lectura(vector<string> vec);
void Mostrar_vector(vector<string> vec);
vector<string> split(string str, char pattern);

int main(){
	int cant_chicos, cant_casos;
	vector<string> A, numeros;
	A=lectura(A);
	cout<<"hoooola"<<endl;
	numeros=split(A[0],' ');
	cant_chicos=atoi(numeros[0].c_str());
	cant_casos=atoi(numeros[1].c_str());
	cout<<cant_chicos<<endl;
	cout<<cant_casos<<endl;
	cout<<cant_casos+cant_chicos<<endl;
	Mostrar_vector(A);
	
	return 0;
}

vector<string> lectura(vector<string> vec){
	ifstream archivo;
	string texto;
	
	
	archivo.open("prueba.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ 
		getline(archivo,texto);
		vec.push_back(texto);
	}
	
	archivo.close();
	return vec;
}

void Mostrar_vector(vector<string> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
	cout<<endl;
}

vector<string> split(string str, char pattern) {
														
    int posInit = 0;									//esta funcion la saque de internet, sirve para poder separar los numeros que estan unidos por un ' '
    int posFound = 0;									//en diferentes strings y asi despues poder pasarlos de string a int con la funcion atoi
    string splitted;									
    vector<string> resultados;

    while(posFound >= 0){
        posFound = str.find(pattern, posInit);
        splitted = str.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        resultados.push_back(splitted);
    }

    return resultados;
}

#include <bits/stdc++.h>
using namespace std;
 class CTriangulo
 {
  	private: 
  		
  		int lado1;
  		int lado2;
  		int lado3;
	   
	public:  
		CTriangulo(int l1, int l2, int l3);
	bool esEscaleno();
	bool esIsosceles();
	bool esEquilatero(); 
	bool tieneAnguloRecto();
	
};

CTriangulo::CTriangulo(int l1, int l2, int l3)
{
	lado1=l1;
	lado2=l2;
	lado3=l3;
}

bool CTriangulo::esEscaleno()
{
	if(lado1!=lado2 && lado1!=lado3 && lado3!=lado2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CTriangulo::esIsosceles()
{
	if(lado1==lado2 && lado1!=lado3)
	{
		return true;
	}
	else
	{
		if(lado1==lado3 && lado1!=lado2)
		{
			return true;
		}
		else
		{
			if(lado3==lado2 && lado3!=lado1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

bool CTriangulo::esEquilatero()
{
	if(lado1==lado2 && lado1==lado3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CTriangulo::tieneAnguloRecto()
{
	if(lado1>=lado2 && lado1>=lado3)
	{
		if( pow(lado2, 2)+pow(lado3, 2) == pow(lado1, 2) )		// teorema de pitagoras
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if(lado2>=lado1 && lado2>=lado3)
		{
			if( pow(lado1, 2)+pow(lado3, 2) == pow(lado2, 2) )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if( pow(lado2, 2)+pow(lado1, 2) == pow(lado3, 2) )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

int main()
{
	int lado1, lado2, lado3;
	cout<<"Ingrese el primer lado del triangulo"<<endl;
	cin>>lado1;
	cout<<"Ingrese el segundo lado"<<endl;
	cin>>lado2;
	cout<<"Ingrese el tercer lado"<<endl;
	cin>>lado3;
	cout<<endl;
	CTriangulo triangulo1(lado1, lado2, lado3);
	if(triangulo1.esEscaleno())
	{
		cout<<"El triangulo es Escaleno, sus tres lados son diferentes, ninguno de sus angulos tienen la misma medida"<<endl;
	}
	if(triangulo1.esIsosceles())
	{
		cout<<"El triangulo es Isosceles, dos de sus lados son iguales y el otro es diferente, dos de sus angulos tambien son iguales"<<endl;
	}
	if(triangulo1.esEquilatero())
	{
		cout<<"El triangulo es Equilatero, sus tres lados son iguales y sus tres angulos internos tienen 60 grados"<<endl;
	}
	if(triangulo1.tieneAnguloRecto())
	{
		cout<<"El triangulo tiene un angulo recto"<<endl;
	}
	
	return  0;
}

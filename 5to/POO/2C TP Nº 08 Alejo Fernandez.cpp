
#include <iostream>
using namespace std;
 class CNumber
 {
  	private: 
  	
	   int num1;
	   int num2;
	   int num3;
	   
	public:  
		CNumber(int a, int b, int c);
	void NumMax();
	void NumMin();
	void Prom();
	void Pares();
	void Inpares();
	void Mostrar();
};

CNumber::CNumber(int a, int b, int c)
{
	num1=a;
 	num2=b;
 	num3=c;
}

void CNumber::NumMax()
{
	if(num1>=num2 && num1>=num3)
	{
		cout<<"El numero mas grande es: "<<num1<<endl;
	}
	else
	{
		if(num2>=num1 && num2>=num3)
		{
			cout<<"El numero mas grande es: "<<num2<<endl;;
		}
		else
		{
			cout<<"El numero mas grande es: "<<num3<<endl;
		}
	}
}

void CNumber::NumMin()
{
	if(num1<=num2 && num1<=num3)
	{
		cout<<"El numero menor es: "<<num1<<endl;
	}
	else
	{
		if(num2<=num1 && num2<=num3)
		{
			cout<<"El numero menor es: "<<num2<<endl;;
		}
		else
		{
			cout<<"El numero menor es: "<<num3<<endl;
		}
	}
}

void CNumber::Prom()
{
	float promedio;
	promedio=(num1+num2+num3)/3.0;
	cout<<"El promedio de los tres numeros es: "<<promedio<<endl;
}

void CNumber::Pares()
{
	int cant_pares=0;
	
	if(num1%2==0)
	{
		cant_pares++;
	}
	if(num2%2==0)
	{
		cant_pares++;
	}
	if(num3%2==0)
	{
		cant_pares++;
	}
	cout<<"Hay "<<cant_pares<<" Numeros Pares"<<endl;
}

void CNumber::Inpares()
{
	int cant_inpares=0;
	
	if(num1%2!=0)
	{
		cant_inpares++;
	}
	if(num2%2!=0)
	{
		cant_inpares++;
	}
	if(num3%2!=0)
	{
		cant_inpares++;
	}
	cout<<"Hay "<<cant_inpares<<" Numeros inpares"<<endl;
}

void CNumber::Mostrar()
{
	cout<<"El primer elemento es: "<<num1<<endl;
	cout<<"El segundo elemento es: "<<num2<<endl;
	cout<<"El tercer elemento es: "<<num3<<endl;
}

int main()
{
	int A, B, C;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>A;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>B;
	cout<<"Ingrese el tercer numero"<<endl;
	cin>>C;
	cout<<endl;
	CNumber grupo1(A,B,C);
	grupo1.NumMax();
	grupo1.NumMin();
	grupo1.Prom();
	grupo1.Pares();
	grupo1.Inpares();
	grupo1.Mostrar();
	
	return  0;
}

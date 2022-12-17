#include <bits/stdc++.h>

using namespace std;

 class CAlumnos
 {
  	private: 
	   int fechas[10][3];
	   string nombres[10];
	   
	public:  
		CAlumno(int a, string b);
	void OrdenAlfab();
	void MayorMenor();
};

CNumber::CNumber(int a, string b)
{
	fechas= a;
	nombres= b;
}

void CNumber::OrdenAlfab()
{
	
}


void CNumber::MayorMenor()
{
	
}

int main()
{
	int A[10][3];
	string B[10];
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		A[i][0]=1960+rand()%50;
		A[i][1]=1+rand()%11;
		A[i][2]=1+rand()%30;
	}
	B[0]="Juan";
	B[1]="Maria";
	B[2]="Tobias";
	B[3]="Alejo";
	B[4]="Manuel";
	B[5]="Jose";
	B[6]="Matias";
	B[7]="Laura";
	B[8]="Pablo";
	B[9]="Leonel";
	CAlumnos grupo1(A,B);
	grupo1.OrdenAlfab();
	grupo1.MayorMenor();
	
	return  0;
}

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n,r(1),s(0);
	cout<<"Ingrese un numero para calcular el factorial y la sumatoria"<<endl;
	cin>>n;
	for(int z=1;z<=n;z++)
	{
		r=r*z;
		s=s+z;
	}
	cout<<"Factorial: "<<r<<endl<<"Sumatoria: "<<s;
	return 0;
}

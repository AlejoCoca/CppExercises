#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n, z(1);
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	for(int x=1;x<n;z=z+2,x=x+z)
	{
		cout<<x<<" ";
	}
}

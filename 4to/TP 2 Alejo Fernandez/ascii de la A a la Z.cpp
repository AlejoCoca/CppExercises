#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	for(int x=97;x<=122;x++)
	{
		cout<<char(x)<<" = "<<x<<endl;
		if(char(100)<char(x))
		cout<<"hola"<<endl;
	}
	return 0;
}

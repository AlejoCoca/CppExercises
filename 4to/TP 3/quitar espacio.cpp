#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25],pal2[25];
	int lon=1,z=0;
	cout<<"Ingrese una su nombre y apellido"<<endl;
	cin.getline(pal,25);
	lon=strlen(pal);
    	for(int x=0;x<lon;x++)
	{
		if(pal[x]!=' ')
	    {
	        pal2[x-z]=pal[x];
        }
        else
        {
            z++;
        }
    }
    cout<<pal2;
	return 0;
}

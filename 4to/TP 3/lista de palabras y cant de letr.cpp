#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[60],pal2[60];
	int lon=1;
	cout<<"Ingrese una su nombre y apellido"<<endl;
	cin.getline(pal,25);
	lon=strlen(pal);
    	for(int x=0;pal[x]!='.';x++)
	{
		if(pal[x]!=' ')
	    {
	        pal2[x]=pal[x];
        }
        else
        {
            pal2[x]='\n';
        }
    }
    cout<<pal2;
	return 0;
}

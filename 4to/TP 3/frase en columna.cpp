#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[60];
	int cl=0;
	cout<<"Ingrese una frase (la frase debe terminar con un punto)"<<endl;
	cin.getline(pal,60);
    	for(int x=0;pal[x]!='.';x++)
	{
		if(pal[x]!=' ')
	    {
	    	cout<<pal[x];
	    	cl++;
        }
        else
        {
            cout<<" "<<cl;
            cout<<endl;
            cl=0;
		}
    }
    cout<<" "<<cl;
	return 0;
}


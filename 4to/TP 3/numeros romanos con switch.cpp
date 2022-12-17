#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char pal[25];
	int n(0);
	cout<<"Ingrese un numero en digitos romanos (usando I, V, X, L, C, D, M)"<<endl;
	gets(pal);
	while(strlen(pal)>0)
	{
		for(int x=0;x<=strlen(pal);x++)
		{
			switch(pal[strlen(pal)-x])
			{
				case'I':{
					if(n<3)
					{
						n++;
					}
					else
					{
						n--;
					}
					break;
				}
				case'V':{
					n=n+5;
					break;
				}
				case'X':{
					n=n+10;
					break;
				}
				case'L':{
					n=n+50;
					break;
				}
				case'C':{
					n=n+100;
					break;
				}
				case'D':{
					n=n+500;
					break;
				}
				case'M':{
					n=n+1000;
					break;
				}
			}
		}
		cout<<pal<<" = "<<n<<endl;
		n=0;
		cout<<"Ingrese otro numero"<<endl;
		gets(pal);
	}
	return 0;
}

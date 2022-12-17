#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	char resp;
	cout<<"presione un caracter"<<endl;
	resp=getch();
	switch(resp)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		{
			cout<<"presionaste una letra vocal"<<endl;
			break;
		}
		case'b':
		case'c':
		case'd':
		case'f':
		case'g':
		case'h':
		case'j':
		case'k':
		case'l':
		case'm':
		case'n':
		case'ñ':
		case'p':
		case'q':
		case'r':
		case's':
		case't':
		case'v':
		case'w':
		case'x':
		case'y':
		{
		cout<<"presionaste una letra consonante"<<endl;
		break;
		}
		case'1':
		case'2':
		case'3':
		case'4':
		case'5':
		case'6':
		case'7':
		case'8':
		case'9':
		case'0':
		{
			cout<<"presionaste un numero";
			break;
		}
		default:
		{
		 cout<<"presionaste una tecla especial";
		 break;
		}
	}
	return 0;
}

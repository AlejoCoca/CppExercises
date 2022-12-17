#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	char mapa[30][30];
	//se definen limites
	for(int i=0;i<30;i++)
	{
		mapa[0][i]='x';
	}
	for(int i=0;i<30;i++)
	{
		mapa[i][0]='x';
	}
	for(int i=0;i<30;i++)
	{
		mapa[29][i]='x';
	}
	for(int i=0;i<30;i++)
	{
		mapa[i][29]='x';
	}
	while(pepe==0){
	// se vacia el mapa con espacios
	for(int i=1;i<29;i++)
	{
		for(int j=1;j<29;j++)
		{
			mapa[i][j]=' ';
		}
	}
	mapa[8][12]='O';
	//se muestra
	for(int i=0;i<30;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<mapa[i][j];
		}
		cout<<endl;
	}
	mov=getch();
	switch(mov)
	{
		case'w':{
			map
			break;
		}
	}
	}
}

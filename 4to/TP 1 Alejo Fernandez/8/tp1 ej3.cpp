#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int dato1, dato2;
    char elec;
    cout<<"elija una figura"<<endl;
    cout<<"presione:"<<endl<<"1 para un triangulo"<<endl<<"2 para una circunferencia"<<endl<<"3 para un rectangulo"<<endl<<"4 para un cilindro"<<endl;
    elec=getch();
    switch (elec)
    {
        case'1':
            {
            cout<<"ingrese la base"<<endl;
            cin>>dato1;
            cout<<"ingrese la altura"<<endl;
            cin>>dato2;
            cout<<"area= "<<dato1*dato2<<endl;
            }
        case'2':
            {
             cout<<"ingrese el radio"<<endl;
             cin>>dato1   
            }
        case'3':
        case'4':
        return 0;
    }
    return 0;
}

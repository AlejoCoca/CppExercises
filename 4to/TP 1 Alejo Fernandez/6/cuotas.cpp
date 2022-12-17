#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int val, cuo;
	char ele;
	cout<<"ingrese el valor de la compra"<<endl;
	cin>>val;
	cout<<"desea pagar en cuotas o en efectivo?"<<endl;
	cout<<"presione C para cuotas o E para efectivo"<<endl;
	ele=getch();
	switch (ele)
	{
		case'c':
		case'C':
		{
			cout<<"en cuantas cuotas desea pagar?"<<endl<<"de 1 a 4 cuotas 10% de recargo"<<endl<<"de 5 a 8 15% de recargo"<<endl<<"de 8 a 12 20% de recargo"<<endl;
			cin>>cuo;
			switch (cuo)
			{
				case 1:
				case 2:
			    case 3:
			    case 4:
				{
					cout<<"monto de la venta= $"<<val<<endl;
					cout<<"monto del recargo= $"<<val*10/100<<endl;
					cout<<"total= $"<<val+val*10/100<<endl;
					cout<<"cantidad de cuotas: "<<cuo<<endl;
					cout<<"valor de cada cuota= $"<<(val+val*10/100)/cuo<<endl;
					break;
				}
				case 5:
				case 6:
				case 7:
				case 8:
				{
					cout<<"monto de la venta= $"<<val<<endl;
					cout<<"monto del recargo= $"<<val*15/100<<endl;
					cout<<"total= $"<<val+val*15/100<<endl;
					cout<<"cantidad de cuotas: "<<cuo<<endl;
					cout<<"valor de cada cuota= $"<<(val+val*15/100)/cuo<<endl;
					break;
				}
				case 9:
				case 10:
				case 11:
				case 12:
				{
					cout<<"monto de la venta= $"<<val<<endl;
					cout<<"monto del recargo= $"<<val*20/100<<endl;
					cout<<"total= $"<<val+val*20/100<<endl;
					cout<<"cantidad de cuotas: "<<cuo<<endl;
					cout<<"valor de cada cuota= $"<<(val+val*20/100)/cuo<<endl;
					break;
				}
			}
		    break;
		}
		case'e':
		case'E':
		{
			cout<<"realize el pago en efectivo de $"<<val<<endl;
			break;
		}
		default:
		{
			cout<<"metodo de pago no aceptado"<<endl;
			break;
		}
	}
	return 0;
}

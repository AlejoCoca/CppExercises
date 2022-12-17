#include<graphics.h>
#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<string.h>
#include<stdio.h>

using namespace std;

main()
{
   
    int ventanax, ventanay, centrox, centroy, n, *poli_xy;
    float iniciox, inicioy, finx, finy;
    char seleccion, texto[20];

    
    cout<<"Ingresa el ancho de la ventana"<<endl;
	cin>>ventanax;
	if(ventanax%2==!0)
	{
		ventanax-=1;
	}
	cout<<"Ingresa el alto de la ventana"<<endl;
	cin>>ventanay;
	if(ventanay%2==!0)
	{
		ventanay-=1;
	}
	//int gdriver=DETECT,gmode;
	//initgraph(&gdriver,&gmode,"C:\\tc\\bgi");
	initwindow(ventanax, ventanay, "Ventana");
	centrox=ventanax/2;
	centroy=ventanay/2;
	line(0, centroy, ventanax, centroy);
	line(centrox, 0, centrox, ventanay);
	
    do
    {
    	cout<<"Seleccione que figura desea dibujar"<<endl;
    	cin>>seleccion;
    	cleardevice();
    	cout<<"Elija el color para la figura (del 2 al 12)"<<endl;
		cin>>n;
		setcolor(n);
   	    switch(seleccion)
   	    {
   	    	case'L':
   	    	case'l':{
   	    		cout<<"ingrese incio de linea en X"<<endl;
				cin>>iniciox;
				cout<<"ingrese incio de linea en Y"<<endl;
				cin>>inicioy;
				cout<<"ingrese fin de linea en X"<<endl;
				cin>>finx;
				cout<<"ingrese fin de linea en Y"<<endl;
				cin>>finy;
				line(centrox+iniciox, centroy+inicioy*-1, centrox+finx, centroy+finy*-1);
				break;
			   }
			case'C':
			case'c':{
				cout<<"ingrese la cordenada X del centro"<<endl;
				cin>>iniciox;
				cout<<"ingrese la cordenada Y del centro"<<endl;
				cin>>inicioy;
				//cout<<"Ingrese el radio de la circunferencia"<<endl;
				//cin>>finx;
				//circle(centrox+iniciox, centroy+inicioy*-1, finx);
				for ( int radio=0; radio<=300; radio+=1)
	 {
	 //	if(centrox+iniciox<(centrox+iniciox)+(centrox+iniciox)/2)
	 //	{
	 //		iniciox+=10;
	//	 }
	 	circle(centrox+iniciox, centroy+inicioy*-1, radio);
	 	delay(100);
	 	cleardevice();
	 }
				break;
			}
			case'P':
			case'p':{
				cout<<"ingrese la cantidad de vertices del poligono"<<endl;
				cin>>n;
				int espacios=(n+1)*2;
				poli_xy = new int [espacios];
				for(int i=0; i<espacios-2; i+=2)
				{
					cout<<"ingrese un valor en X para el vertice "<<(i/2)+1<<endl;
					cin>>finx;
					poli_xy[i]=centrox+finx;
					cout<<"ingrese un valor en Y para el vertice "<<(i/2)+1<<endl;
					cin>>finy;
					poli_xy[i+1]=centroy+finy*-1;
				}
				poli_xy[espacios-2]=poli_xy[0];
				poli_xy[espacios-1]=poli_xy[1];
				drawpoly(n+1,poli_xy);
				break;
			}
			case'T':
			case't':{
				cout<<"ingrese la cordenada X"<<endl;
				cin>>iniciox;
				cout<<"ingrese la cordenada Y"<<endl;
				cin>>inicioy;
				cin.ignore(1000000, '\n');
				cout<<"ingrese el texto"<<endl;
				cin.getline(texto,20);
				outtextxy(centrox+iniciox, centroy+inicioy*-1, texto);
				break;
			}
		}
		
	}while(seleccion!='x'); 
	
	circle(centrox, centroy, 1);
	 for ( int radio=25; radio<=125; radio+=20)
	 {
	 	circle(centrox, centroy, radio);
	 }
      
	
	getch();
	closegraph();
}

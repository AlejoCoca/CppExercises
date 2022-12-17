#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>    
#include <string>    
#include <vector>    

using namespace std;

int main ()
{
 srand (time(NULL));
 int posicion= rand()%14; // GENERO NUMERO ALEATORIO DEL 0 al 13
 string p;
 string a;
 string colores [] =  {"Blue", "Red", "Orange","Yellow", "Black", "Brick red","Blue-violet", "Beige", "Gold", "Orange", "Purple", "Salmon", "Turquoise"};
 // Le asigno a un vector colore los nombres correspondientes

cout <<colores[posicion]<<endl; // imprimo el color que la posicion del vectror
cout <<posicion<<endl; // muestro la posicion


p= colores[posicion];
cout <<p<<endl;
a= p.assign(p.size(),'*');
cout<< a<<endl;

   return 0;
}

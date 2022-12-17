#include <iostream>
#include <string>

using namespace std;


string Cambiarpalabra(string p);
int main()
{
string palabra;
int z, y;
cout<<"ingrese Palabra: \n";
cin>>palabra;
cout<<"La palabra cambiada es "<<Cambiarpalabra(palabra);
return 0;
}


string Cambiarpalabra(string p)
{
int i;
for(i=0; i<p.size(); i++)
{
if(p[i]=='a' || p[i]=='A')
{
p[i]='X';
}

}

return p;


}



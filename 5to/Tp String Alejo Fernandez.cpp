#include <string>
#include <iostream>
using namespace std;

string funcion(string x);
int main()
{
	string pal;
	cout<<"escriba una oracion"<<endl;
	getline(cin,pal);
	cout<<funcion(pal);
}

string funcion(string x)
{
	for(int i=0;i<x.size();i++)
	{
		if (x[i]=='o')
		{
			x[i]='0';
		}
		else{
			if(x[i]=='i')
			{
				x[i]='1';
			}
			else{
				if(x[i]=='e')
				{
					x[i]='3';
				}
				else{
					if(x[i]=='a')
					{
						x[i]='4';
					}
					else{
						if(x[i]=='s')
						{
							x[i]='5';
						}
						else{
							if(x[i]=='g')
							{
								x[i]='6';
							}
							else{
								if(x[i]=='t')
								{
									x[i]='7';
								}
								else{
									if(x[i]=='b')
									{
										x[i]='8';
									}
									else{
										if(x[i]=='p')
										{
											x[i]='9';
										}
									}
								}
							}
						}
					}
				}
		}
	}
	}
	return x;
}

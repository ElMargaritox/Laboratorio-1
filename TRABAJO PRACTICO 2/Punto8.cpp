//8.	Crear el programa asteriscos5 en el que se introduce un número entero y se crea una pirámide de asteriscos. Por ejemplo si se introduce el 6, el resultado sería:

#include <iostream>
using namespace std;

main()
{
 
	int i;
	int n;
	int valor;
 
 
	cout<<"introduzca valor (1-7)"<<endl;
	cin>>valor;
	cout<<endl;
 
	for(i=1;i<=valor;i++){
		for(n=1;i>=n;n++)
			 cout<<"*";
			cout<<"\n";
		//printf("\n");
 
	}

    system("pause>nul");
}

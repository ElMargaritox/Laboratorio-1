#include <iostream>
using namespace std;


int main(){
    	int numeros [15], vuelta=0, aux;

	for (int i=0;i<15;i++) { //lectura de 15 numeros
		cout << "Introduzca un numero: " << endl;
		cin>>numeros [i];
	} 
	
	do { //orden de numeros (metodo burbuja)
		for (int i=0;i<15;i++) { 
			if (numeros [i]>numeros [i+1]) {
				aux=numeros [i];
				numeros [i]=numeros [i+1];
				numeros [i+1]=aux;
			}	
		}
		vuelta++;
	} while (vuelta<15);
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Orden ascendente"<<endl;
	for (int w=0;w<15;w++) { //ascendente
		cout<<numeros [w]<<"\t";	
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Orden descendente"<<endl;	
	for (int w=14;w>=0;w--) { //descendente
		cout<<numeros [w]<<"\t";
	}
    system("pause>nul");
}

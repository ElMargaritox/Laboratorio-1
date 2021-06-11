/*
2.	Crear un programa que cree un array con 100 letras mayúsculas aleatorias y que
 cuenta cuántas veces aparece cada letra en el array
*/


#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
using namespace std;

main(){
    char letras [100];
	char abcdario [26];
	int p=0,cont=0;
	
	
	srand(time(NULL));
	
	for (int o=0;o<26;o++) { //inizializacion del abecedario
		abcdario [o] = 'A' + o;
	} 
	
	for (int i=0;i<100;i++) { //generador de letras aleatorias (100)
		letras[i] = 'A' + rand() %( ('Z' - 'A') + 1);
        cout<<letras[i]<< "\t";
	}

    cout << endl;
	
	do { //contador	
		for (int q=0;q<100;q++) {
			if (abcdario [p] == letras [q] ) { 
			cont=cont+1;
			}
		}
        cout<<abcdario [p]<<" aparece "<<cont<<" veces"<<endl; 
        cont=0;
        p++;
	} while (p<26);
    system("pause>nul");
}
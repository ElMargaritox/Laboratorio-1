//	Cargue un arreglo de 20 números y promedie los mismos.

#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;

main(){
    float numeros[20],
          contador = 0,
          numeroalazar;
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        numeroalazar = 1 + rand() % (10);
        numeros[i] = numeroalazar;
        contador+=numeros[i];
    }

    contador = contador / 20;

    cout<<"El Promedio Es De: "<<contador<<endl;
    system("pause");
    
}
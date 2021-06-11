#include <iostream>
using namespace std;

bool analizarArray(char [], char []);

main(){
    char letras[5];
    char segundasLetras[5];
    bool resultado,exit;
    int cont = 0;

    do{
        cout<<"Inserte letras al siguiente arreglo"<<endl;
        cin>>letras[cont];
        cont++;
    } while (cont < 4);

    cont = 0;
    do{
        cout<<"Ahora inserte las mismas pero en el orden que quiera"<<endl;
        cin>>segundasLetras[cont];
        cont++;
    } while (cont < 4);
    
    resultado = analizarArray(letras,segundasLetras);
    if(resultado){
        cout<<"Los arrays efectivamente almacenan los mismos valores"<<endl;
    }else{
        cout<<"Estos valores no son los mismos del primer arreglo"<<endl;
    }
}

bool analizarArray(char primero[], char segundo[]){
    int cont = 0;

    for (int i = 0; i <= 4; i++){
        if(cont != 5){
            return false;
        }
        for (int j = 0; i <= 4; i++){
            if(primero[i] == segundo[j]){
                cont++;
            }
        }
    }
    return true;

}
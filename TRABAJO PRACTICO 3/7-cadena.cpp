#include <iostream>
#include <string>
using namespace std;

bool buscarTexto(string palabra, string texto);

main(){
    string palabra1, palabra2;
    bool value;

    cout<<"Inserte una palabra"<<endl;
    cin>>palabra1;
    cout<<"Recuerda la palabra anterior? inserte una palabara que este contenida dentro de la anterior"<<endl;
    cin>>palabra2;
    value = buscarTexto(palabra1,palabra2);
    if(value){
        cout<<"Correcto!";
    }else{
        cout<<"Incorrecto!";
    }
}

bool buscarTexto(string palabra, string texto){
    int hallazgo = texto.find(palabra);
    if(hallazgo == 0){
        return false;
    }
    return true;
}
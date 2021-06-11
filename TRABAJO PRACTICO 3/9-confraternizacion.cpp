#include <iostream>
#include <string>
using namespace std;

main(){
    string guardado[5][1];

    //guardo los valores de cada alumno;
    for (int carga = 0; carga <= 4; carga++){
        getline(cin,guardado[carga][0]);
    }
    //imprimo alumno y la fecha
    for (int name = 0; name <= 4; name++){
        cout<<"Alumno y fecha: "<<guardado[name][0]<<endl;       
    }
    

}
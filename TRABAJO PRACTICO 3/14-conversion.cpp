#include <iostream>
#include <string>  
#include <cstring>
#include <iomanip>
#include <sstream> 
using namespace std;

string convHex(int decimal);

main() {

    int numero;
    int dimension = 3, i;
    string conversionHex;
    char arreglo[dimension + 1];
    
    do {
        cout<<"Ingrese un numero entre 0 y 32000, para convertirlo en hexadecimal." << endl;
        cin>>numero;

    } while(numero<0 || numero>32000);

    conversionHex = convHex(numero);
    strcpy(arreglo, conversionHex.c_str());

    cout << "Numero convertido a hex: " << endl;

    for (i = 0; i < dimension; i++) {
        cout << arreglo[i];
    }
    cout<<endl;
}

string convHex(int decimal) {
    stringstream numeroHex;
    numeroHex<<hex<<decimal;
    string result(numeroHex.str());
    return result;
    
}
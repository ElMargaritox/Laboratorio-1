#include <iostream>

using namespace std;

main(){
    int vectorA[5], vectorB[5], vectorC[5];
    int i;

    for (i = 0; i < 3; i++) {
        cout << "Ingrese numero en VECTOR A: " << endl;
        cin >> vectorA[i];
        cout << "Ingrese numero en VECTOR B: " << endl;
        cin >> vectorB[i];
        vectorC[i] = vectorA[i] + vectorB[i];
        cout << endl;
        cout << "La suma de VECTOR A y VECTOR B en el VECTOR C es: " << endl;
        cout << endl;
        cout <<  vectorA[i] << " + " << vectorB[i] << " = " << vectorC[i] << endl; 
    }

    system("pause>nul");
}
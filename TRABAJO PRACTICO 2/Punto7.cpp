#include <iostream>
using namespace std;

// Crear un programa que lea un número y calcule la sucesión Fibonacci hasta el valor anterior más cercano al mismo y 
// el valor posterior más próximo. Realice este ejercicio utilizando primero un bucle for y posteriormente repita el 
// ejercicio utilizando un bucle while.

main (){

    int hasta, a, b, c, i, z;
    a = 0;
    b = 1;
    c = 0;
    z = 0;

    cout << "Introduzca un numero. " << endl;
    cin >> hasta;

    cout<<"FOR"<<endl;
    system("sleep 5");

    for (i = 0; i < hasta; i++) {

        if (a < hasta) {
        cout << a << "\t";
        } else {
        break;
        }

        c = a + b;
        a = b;  
        b = c;
  }

    a = 0;
    b = 1;
    c = 0;

  cout << "WHILE"<<endl;

  while (z < hasta) {

        if (a < hasta) {
        cout << a << "\t";
        } else {
        break;
        }

        c = a + b;
        a = b;  
        b = c;

        z++;

  }

  system("pause>nul");

}
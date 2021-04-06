#include <iostream>

using namespace std;

// En una Obra Social, dada la edad de una persona, se le asignará una determinada Categoría; que será 
// “Recién nacido” (menos de 1 año), “Infante” (hasta 5 años), “Niño” (de 6 a 12 años), “Pre-adolescente” 
// (más de 12 años, hasta 18); “Adolescente” (más de 18 años, hasta 25), “Adulto joven” (más de 25, hasta 35 años); 
// “Adulto” (más de 35, hasta 50 años) o “Adulto mayor” (más de 50 años). Dada la edad de una persona, informar su Categoría. 


int main() {

float edad;
int month_year;

string recienNacido = "Recién nacido";
string infante = "Infante";
string nino = "Niño";
string preAdolescente = "Pre-Adolescente";
string adolescente = "Adolescente";
string adultoJoven = "Adulto joven";
string adulto = "Adulto";
string adultoMayor = "Adulto mayor";

string output;

cout << endl;
cout << "Por favor igrese edad en años o meses," << endl;
cout << "para usar Años, ingrese: 1    para Meses, ingrese: 2" << endl;
cin >> month_year;

if (month_year == 1) {

    cout << "Opcion selecionada: Años, introduzca edad en años:" << endl;
    cin >> edad;

    if (edad > 0 && edad < 140) {

        if (edad >= 1 && edad <= 5) { 
            output = infante;
        }
        if (edad >= 6 && edad <= 12) {
            output = nino;
        }
        if (edad > 12 && edad <= 18) {
            output = preAdolescente;
        }
        if (edad > 18 && edad <= 25) {
            output = adolescente;
        }
        if (edad > 25 && edad <= 35) {
            output = adultoJoven;
        }
        if (edad > 35 && edad <= 50) {
            output = adulto;
        }
        if (edad > 50) {
            output = adultoMayor;
        }
        cout << "La categoría es: " << output << "." << endl;
        
    } else {
        cout << "Valor fuera de parámetros, minimo 1, maximo 140." << endl;
    }
    
}

if (month_year == 2) {

    cout << "Opcion selecionada: Meses, introduzca edad en meses:" << endl;
    cin >> edad;

    if (edad < 12 && edad > 0) {
        output = recienNacido;  
        cout << "La categoría es: " << output << "." << endl;

    } else {
        cout << "Valor fuera de parámetros, minimo 1, maximo 11." << endl;
    }

} else {
    cout << "Categoria invalida. Opciones disponibles 1 (años), 2 (meses)" << endl;
}

return 0;  
}
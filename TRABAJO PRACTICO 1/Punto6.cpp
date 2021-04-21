/*
6-	Dados los datos de una persona (nombre, sueldo, inasistencias) y la cantidad de días laborables del mes; mostrar el 
sueldo que le corresponde cobrar (los días no trabajados se le descuentan). 
*/

#include <iostream>
using namespace std;

main(){
    float sueldo, sueldo_total;
    string nombre;
    int inasistencias, diaslaborales = 30;
    

    cout<< "Ingrese el nombre de la persona: ";
    cin>> nombre;
    cout<< "Ingrese las inasistencias de la persona: ";
    cin>> inasistencias;
    cout<< "Ingrese el sueldo de la persona: ";
    cin>> sueldo;


diaslaborales = diaslaborales - inasistencias;

if(diaslaborales <= 0){
    cout<<"La Persona No Puede Cobrar:";
    system("pause");
    system("exit");
}

    sueldo_total = sueldo * diaslaborales;

cout<<"Sueldo Total: "<<sueldo_total;
system("pause>nul");

}
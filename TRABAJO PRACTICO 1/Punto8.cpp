#include <iostream>

using namespace std;

// La municipalidad permite financiar una multa cobrando un determinado recargo. Se debe informar el valor a 
// pagar de la cuota, una vez que el contribuyente haya elegido en cuantas cuotas desea abonar su 
// deuda (total + recargo). Además, si la multa es del año anterior, se le cobra un adicional de 45$. 
// Si el beneficiario ya está pagando otra financiación, no se le permite acceder a esta facilidad de pago.


main() {

    int year, otraMulta, cantidadDeCuotas;
    float deuda, montoCuotas, recargo;
    bool noAdmisible;

    recargo = 45;
    year = 2021;

        cout << "Indique si es feneficiario de otra financiacion: para Si use 1, para No use 2." << endl;
        cin >> otraMulta;

        if (otraMulta == 1) {
            noAdmisible = true;
            cout << "Lo siento, no puede participar del programa." << endl;


        } else {
            noAdmisible = false;
        }

        cout << "Ingrese el año de la deuda. AAAA (Ejemplo 2020)." << endl;
        cin >> year;
        cout << "Por favor ingrese el monto total de la deuda." << endl;
        cin >> deuda;
        cout << "Finalmente seleccione cantidad de cuotas, min 1 max 12" << endl;
        cin >> cantidadDeCuotas;
  
        if (year == 2021) {     
            montoCuotas = deuda / cantidadDeCuotas;
        }
        if (year != 2021) {
            montoCuotas =  (deuda + recargo) / cantidadDeCuotas;
        }
        cout << "Cantidad de cuotas: " << cantidadDeCuotas << " con un valor de $" << montoCuotas << " cada una." << endl;

        

}
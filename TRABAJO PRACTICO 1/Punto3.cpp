/*3-	Una empresa de transporte cobra sus honorarios según los km recorridos y la cantidad de bultos que lleva a un cliente. 
Indicar el total a cobrarle al cliente, agregándole el importe de IVA (21%). Por cada bulto cobra un canon de 40 pesos, 
 y por km recorrido 20 pesos. 
 */


#include <iostream>
using namespace std;
main(){

    float kilometros, cantidad_vueltas, precio_kilometro, precio_vuelta, precio_total;


    cout<<"Cuantos Kilometros Recorrio: ";
    cin>>kilometros;
    cout<<"Cuantos Cantidad De Vueltas: ";
    cin>>cantidad_vueltas;

    precio_kilometro = 20 * kilometros;
    precio_vuelta = 40 * cantidad_vueltas;

precio_total = precio_kilometro + precio_vuelta +210;

cout<<"Total A Cobrar: "<<precio_total<<"$";

}
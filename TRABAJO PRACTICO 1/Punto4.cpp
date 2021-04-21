/*
4-	En un boliche se desea saber las ganancias de una noche, sabiendo que se vendieron una cierta cantidad de entradas a un determinado precio 
y hubo gastos que se deben descontar. Como ejemplo tomemos el caso de 1000 entradas vendidas, x% a un valor de $50 y el resto a un valor de $25. 
Por casa entrada de $50, corresponde un gasto de $12 y por cada entrada de $25 un gasto de $9.  
Realizar un informe que muestre la recaudación, gastos por tipo de entrada y la ganancia final.
*/


#include <iostream>
using namespace std;
main(){
    int entradas_vendidas_50, entradas_vendidas_25, precio_50, precio_25, precio_entradas;
    float descuento_50, descuento_25, ganancia;

    cout<<"Cuantas Entradas de 50 Se Vendieron: ";
    cin>>entradas_vendidas_50;
    cout<<"Cuantas Entradas de 25: Se Vendieron: ";
    cin>>entradas_vendidas_25;


    precio_50 = entradas_vendidas_50 * 50;
    precio_25 = entradas_vendidas_25 * 25;
    precio_entradas = precio_50 + precio_25;
    
    descuento_50 = precio_50 * 0.24;
    descuento_25 = precio_25 * 0.36;

	cout<<" La ganancia en bruto de las entradas es: "<<precio_entradas<<endl;
	cout<<" El descuento por las entradas de $50 es: "<<descuento_50<<endl;
	cout<<" El descuento por las entradas de $25 es: "<<descuento_25<<endl;
	ganancia = (precio_50 - descuento_50) + (precio_25 - descuento_25); 
	cout<<" La ganancia total de la noche es de: "<<ganancia<<endl;


}
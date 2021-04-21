#include <iostream>
using namespace std;

main(){


/*
1-	El dueño de un hostel necesita cobrar la estadía a un grupo de jóvenes que se 
han alojado considerando la cantidad de días que se han quedado y el valor por día. Debe cobrar el neto más el IVA (21% del neto), 
informándoles estos importes por separado. Además, han consumido del frigobar, 
por un importe igual a un tercio del total sin iva. Imprimir por pantalla una factura.
*/
    float dias, valor_por_dia, iva, consumido, precio_por_dia, precio_frigobar, precio, precio_siniva;
    valor_por_dia = 1000;

        cout<<"Escribe cuantos dias se han quedado: ";
        cin>>dias;
        precio_por_dia = valor_por_dia * dias;
        cout<<"Cuanto Han Consumido Del Frigobar: ";
        cin>>consumido;
        precio_frigobar = 99.1 * consumido;

        cout<<"========FACTURA========"<<endl;
        cout<<"Dia Alojados: "<<dias<<endl;
        cout<<"Precio Por Dia: "<<valor_por_dia<<endl;
        cout<<"----------------"<<endl;
        cout<<"Elementos Consumidos: "<<consumido<<endl;
        cout<<"Precio Total: "<<precio_frigobar<<endl;
        cout<<"----------------"<<endl;

        precio = precio_por_dia + precio_frigobar + 210;
        precio_siniva = precio_por_dia + precio_frigobar;
        cout<<"Precio Total (Con Iva): "<<precio<<endl;
        cout<<"Precio Total (Sin Iva): "<<precio_siniva<<endl;
        cout<<"========FACTURA========"<<endl;


}
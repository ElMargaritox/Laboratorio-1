/*
3.	Desarrolle un programa que le informe al farmacéutico el porcentaje de descuento a aplicar a los afiliados a una Obra Social. 
Sabiendo que si el afiliado tiene Plan A, todas las recetas que presente tendrán un descuento del 100%. 
En el caso que se trate de un Plan B o C, el afiliado tendrá un descuento del 90%; y si es Plan D un 50%. 
Para el resto de los planes, sólo tendrá el 25%. Si el afiliado paga en efectivo, 
la farmacia lo beneficia con el descuento del 5% más el descuento antes citado.
*/


#include <iostream>
using namespace std;

main(){

int plan,
    dinero = 1000,
    metodopago;


cout<<"Ingrese El Tipo De Plan:"<<endl;
cout<<" 1: Plan A"<<endl;
cout<<" 2: Plan B"<<endl;
cout<<" 3: Plan C"<<endl;
cout<<" 4: Plan D"<<endl;

cin>>plan;

if(plan > 0 & plan <= 10){

cout<<"Ingrese El Metodo De Pago:"<<endl;
cout<<"1: Efectivo"<<endl;
cout<<"2: Otro"<<endl;
cin>>metodopago;

if(metodopago > 0 & metodopago <= 2){

switch (plan)
{
case 1: // PLAN A
    dinero = 0;
    cout<<"Tienes El 100% Del Descuento, Por Lo Que Pagaras: "<<dinero<<"$"<<endl;
    break;
case 2: case 3:// PLAN B Y C
    dinero = 90 * dinero / 100;
    cout<<"Tienes El 90% Del Descuento, Por Lo Que Pagaras: "<<dinero<<"$"<<endl;
    break;
case 4:
    dinero = 50 * dinero / 100;
    cout<<"Tienes El 50% Del Descuento, Por Lo Que Pagaras: "<<dinero<<"$"<<endl;
    break;
default:
    if(plan == 1){
    dinero = 30 * dinero / 100;
    cout<<"Tienes El 25% Del Descuento. Mas Un 5% De Beneficio, Por Lo Que Pagaras: "<<dinero<<"$"<<endl;
    
    }else{
    cout<<"Tienes Que Pagar: "<<dinero<<"$"<<endl;
    }
    
    break;
    
}
system("pause>nul");

}else{
   cout<<"Accion Introducida, Invalida"<<endl;
    system("sleep 5"); 
}
}else{
    cout<<"Accion Introducida, Invalida"<<endl;
    system("sleep 5");
}


}
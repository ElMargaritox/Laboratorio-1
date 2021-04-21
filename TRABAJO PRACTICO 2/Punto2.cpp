/*2.	Una Agencia de viajes ha implementado un nuevo sistema de regalos a los clientes que contraten sus servicios.  
Se desea un programa que indique, dado el pedido del cliente, cuál es regalo asignado por la empresa.   
Si se trata de un viaje a algún lugar dentro de la provincia; para 1 o 2 personas, se le regalará entradas a un espectáculo;
 si fueran 3 o más personas, 2 días más de estadía. Si en cambio fuera un viaje fuera de la provincia (pero dentro de Argentina); 
 para 1 o 2 personas; menos de 7 días, 1 día más de estadía; caso contrario, excursiones gratis. 
 Si fueran 3 o más personas, y menos de 7 días, descuentos a espectáculos, para más días, serán excursiones gratis.  
 Si el viaje fuera al exterior; para 1 o 2 personas, hasta 7 días se le dará 1 un juego completo de valijas;
  para más días, excursiones gratis. Para el resto de los viajes al extranjero; 7 o más días se les darán cupones de descuento; 
  menos de 7 días se les entregará un juego completo de valijas.



* ._.  / 
*/

#include <iostream>
using namespace std;

main(){
    
    int accion,
        personas,
        dias,
        dias_adicionales = 0;


cout<<"---SELECCIONA EL TIPO DE VIAJE---"<<endl;
cout<<"1: Dentro De La Provincia"<<endl;
cout<<"2: Afuera De La Provincia (Argentina)"<<endl;
cout<<"3: Al Extranjero (Nacional)"<<endl;
cin>>accion;

if(accion >= 0 & accion <= 3){
    
cout<<"-CUANTAS PERSONAS VIAJARAN: "<<endl;
cin>>personas;

if(personas <= 0){
    accion = 4;
}

cout<<"-CUANTOS DIAS DE ESTADIA: "<<endl;
cin>>dias;

if(dias <= 0){
    accion = 4;
}


switch (accion)
{
case 1:
    
    if(personas > 0){
        cout<<"-- Obtienes Entradas A Un Espectaculo --"<<endl;
    }
    else{
        dias_adicionales +=2;
    }

    cout<<"VIAJES DENTRO DE LA PROVINCIA"<<endl;
    cout<<"PERSONAS: "<<personas<<endl;
    cout<<"DIAS VIAJADOS: "<<dias<<endl;
    cout<<"DIAS ADICIONALES: "<<dias_adicionales<<endl;
    system("pause>nul");



    break;
case 2:
    if(personas > 0 & personas <= 2){
        if(dias <= 7){
            dias_adicionales +=1;
        }else{
            cout<<"-- EXCURSIONES GRATIS --"<<endl;
        }
    }
    else{
        if(dias <= 7){
            cout<<"-- EXCURSIONES GRATIS --"<<endl;
            cout<<"-- DESCUENTOS A ESPECTACULOS --"<<endl;
        }
    }

    cout<<"VIAJES AFUERA DE LA PROVINCIA (ARGENTINA)"<<endl;
    cout<<"PERSONAS: "<<personas<<endl;
    cout<<"DIAS VIAJADOS: "<<dias<<endl;
    cout<<"DIAS ADICIONALES: "<<dias_adicionales<<endl;
    system("pause>nul");

    break;
case 3:

    if(personas > 0 & personas <= 2){
        if(dias == 7){
            cout<<"-- JUEGO COMPLETO DE VALIJAS --"<<endl;
            cout<<"-- EXCURSIONES GRATIS --"<<endl;
        }
        else if(dias > 7){
            cout<<"-- CUPONES DE DESCUENTO --"<<endl;
        }
        else{
            cout<<"-- DE REGALO: UN JUEGO COMPLETO DE VALIJAS --"<<endl;
        }
    }

    cout<<"VIAJES AFUERA DE LA PROVINCIA (ARGENTINA)"<<endl;
    cout<<"PERSONAS: "<<personas<<endl;
    cout<<"DIAS VIAJADOS: "<<dias<<endl;
    cout<<"DIAS ADICIONALES: "<<dias_adicionales<<endl;
    system("pause>nul");

    break;

default:
    cout<<"Dato Erroneo. Reinicia El Programa"<<endl;
    system("sleep 5");
    break;
}
}else{
    cout<<"Dato Erroneo. Reinicia El Programa"<<endl;
    system("sleep 5");
}


}
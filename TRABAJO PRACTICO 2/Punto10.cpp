/*
10.	Realice un programa que permita jugar a adivinar un número entero (indicando los aciertos individuales con Bueno, Regular y Malo). Ejemplo: número a adivinar: 3526.  Intento: 1356. Resultado: 1 Bueno, 2 Regular, 1 Malo. 

Es decir, se está indicando que hay un número correcto en valor y posición: es el “6”.  Además, se está indicando que hay dos números correctos en valor pero NO en posición: son el “3” y el “5”. Y por último, que hay un número incorrecto: el “1”.  
*/
#include <iostream>
using namespace std;
int main()
{

    int bueno = 0,
     regular = 0,
     malo = 0,
     n_adivinar = 3571,
 aux_n_adivinar,
 n_ingresado,
 aux_n_ingresado,
 buscar_numero,
 posicion = 1000,
 numero_adivino;
    bool numero_encontrado = false;
    cout<<"Bienvenido al juego de adivinanza"<<endl;
    cout<<"El número que debe ingresar debe ser de cuatro cifras"<<endl;
    cin >> n_ingresado;
    aux_n_ingresado = n_ingresado;

    for(int i = 1; i <= 4; i++){
        
        buscar_numero = aux_n_ingresado / posicion;
        
        numero_encontrado = false;
        aux_n_adivinar = n_adivinar;
        for(int j = 1000; j >= 1; j=j/10){
           numero_adivino = aux_n_adivinar / j;
          
           if(posicion == j && numero_adivino == buscar_numero){
                bueno ++;
                numero_encontrado = true;
                break;
               
           }else if(numero_adivino == buscar_numero){
                regular ++;
                numero_encontrado = true;
                break;
           }
           aux_n_adivinar = aux_n_adivinar - (numero_adivino*j);
        }
       
        if(numero_encontrado == false){
            malo ++;
        }
     
        aux_n_ingresado = aux_n_ingresado - (buscar_numero * posicion);
       
        posicion = posicion / 10;
    }
    cout<<"El número a adivinar era: "<<n_adivinar<<endl;
    cout<<"El número ingresado es: "<<n_ingresado<<endl;
    cout<<"El resultado fue el siguiente:"<<endl;
    cout<<"     Bueno :"<<bueno<<endl;
    cout<<"     Regular :"<<regular<<endl;
    cout<<"     Malo :"<<malo<<endl;
    return 0;
}
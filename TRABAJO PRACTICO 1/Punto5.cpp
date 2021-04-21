//5-	Determinar dados tres números cual es el mayor y cual el menor.

#include <iostream>
using namespace std;
main(){
    
int numero, numero2, numero3;


cout<<"Escribe El Numero 1: ";
cin>>numero;
cout<<"Escribe El Numero 2: ";
cin>>numero2;
cout<<"Escribe El Numero 3: ";
cin>>numero3;


if(numero > numero2 && numero > numero3){
    cout<<"El Numero 1 Es El Mayor\n";
}
else if(numero2 > numero && numero2 > numero3){
    cout<<"El Numero 2 Es El Mayor\n";
}
else 
{
    cout<<"El Numero 3 Es El Mayor\n";
}

if(numero < numero2 && numero < numero3){
    cout<<"El Numero 1 Es El Menor\n";
}
else if(numero2 < numero && numero2 < numero3){
    cout<<"El Numero 2 Es El Menor\n";
}
else{
    cout<<"El Numero 3 Es El Menor\n";
}

system("pause");

}
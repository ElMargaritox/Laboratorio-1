// 5.	Ingresar un número natural n e indicar si es primo.

#include <iostream>
using namespace std;

main(){

    int numero,
        divisiones = 0,
        residuo = 0;

    cout<<"Ingresa Un Numero Natural"<<endl;
    cin>>numero;

    do
    {
      if(numero % divisiones == 0){
          residuo++;
      }
      divisiones++;
    } while (divisiones <= numero);
    
    if(residuo == 2){
        cout<<"El Numero"<<numero<<"Es Primo"<<endl;
    }else{
        cout<<"El Numero"<<numero<<"NO Es Primo"<<endl;
    }
    system("pause");
}
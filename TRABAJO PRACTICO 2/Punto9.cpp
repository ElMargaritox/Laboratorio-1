/*
9.	Realizar un algoritmo que permita a una máquina expendedora de gaseosas realizar su venta diaria.
 La máquina se carga con una cierta cantidad latas de gaseosa de distintos tipos para poder venderlas a un determinado precio (3.50$).
  Permite recibir monedas de 1$ y 50 centavos y da el vuelto cuando corresponda.
   Tiene un visor en donde va informando los distintos momentos: 
   “Ingrese monedas para recibir la bebida”, “Elija la bebida”, “Retire su bebida”, “Retire su vuelto”, “Disculpe, no hay más bebidas”.
*/

#include <iostream>
using namespace std;

main(){

    int stock = 0,
        OPCION = 0,
        tipo,
        monedas;
        float centavos,
              vuelto,
              total;
              bool compro,
                   salir,
                   owo,
                   vuelto_dar;
            


    cout<<"[ADMIN] Cuantas Latas De Gaseosas Hay En La Maquina"<<endl;
    cin>>stock;

    if(stock <= 0){
        cout<<" ¡Tienes Que Escribir Un Numero Valido!"<<endl;
        system("sleep 5");
        system("exit");
    }

    do
    {
       
        do
        {
        cout<<"-= MAQUINA EXPENDEDORA =-"<<endl;
        cout<<"-=======================-"<<endl;
        cout<<"1: COMPRAR UNA BEBIDA"<<endl;
        if(compro){
            cout<<"2: RETIRAR BEBIDA"<<endl;
            cout<<"3: RETIRAR VUELTO"<<endl;
        }
        cout<<"-=======================-"<<endl;
        cout<<"-STOCK DISPONIBLE: "<<stock<<endl;
        cout<<"-=======================-"<<endl;
        cin>>OPCION;
        system("cls");
        } while (OPCION > 3);  


            switch (OPCION)
            {
            case 1:
                
            if(compro)cout<<"- Ya Has Comprado La Bebida, Retirala"<<endl;
            if(stock > 0 && !compro){
                    //MONEDAS
                    do
                    {
                        cout<<"Cuantas Monedas De 1$: "<<endl;
                        cin>>monedas;

                        if(monedas <= 0)cout<<"El Numero Ingresado De Monedas Es Invalido. Reintenta"<<endl;

                    } while (monedas <= 0);

                    //CENTAVOS
                    do
                    {
                        cout<<"Cuantas Monedas De 50 Centavos: "<<endl;
                        cin>>centavos;

                        if(centavos <= 0)cout<<"El Numero Ingresado De Monedas Es Invalido. Reintenta"<<endl;

                    } while (centavos <= 0);
            }

        total=monedas + (0.50 * centavos);
        vuelto = total - 3.50;

        if(vuelto <= 0){
            cout<<"Te Falta Dinero... "<<endl;
        }else{
            vuelto_dar = true;
            compro = true;

            do
            {
            cout<<"Tipo De Gaseosa:"<<endl;
            cout<<"1 : pepsi"<<endl;
            cout<<"2 : coka kola"<<endl;
            cin>>tipo;
            switch (tipo)
            {
            case 1:
                cout<<"Tipo de Gaseosa. Seleccionada Pepsi"<<endl; 
                owo = true;
                break;
            case 2:
                cout<<"Tipo de Gaseosa. Seleccionada Coka Kola"<<endl;
                owo = true;
                break;
            default:
                cout<<"Tipo De Gaseosa Es Invalido"<<endl;
                owo = false;
                break;
            }
            } while (!owo);
            
           stock -=1;


        }
                break;
            case 2:
                if(!compro & tipo == 0){
                    cout<<"No Has Comprado Ninguna Bebida, Compra Para Retirarla"<<endl;
                }
                else if(compro & tipo > 0){
                    if(tipo == 1){
                        cout<<"Se Ha Retirado La Bebida: Pepsi"<<endl;tipo = 0;                      
                    }else{
                        cout<<"Se Ha Retirado La bebida: Coka Kola"<<endl;tipo = 0;
                    }
                }
                break;
            case 3:
                if(!compro & tipo == 0){
                    cout<<"No Has Comprado Ninguna Bebida"<<endl;
                }else{
                  if(vuelto_dar){
                     cout<<"Se Te Ha Dado De Vuelto: "<<vuelto<< "$"<<endl;vuelto_dar = false;compro = false;
                     
                     
                  }else{
                      vuelto_dar = false;compro = false;
                     cout<<"No Te Quedo Vuelto:"<<endl;
                  }
                }
                break;
            default:
                cout<<"El Numero Ingresado Es Invalido"<<endl;
                break;
            }



        
        salir = false;


    } while (!salir);
}

    
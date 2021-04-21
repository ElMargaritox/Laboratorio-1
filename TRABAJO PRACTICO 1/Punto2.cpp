/*
2-	Calcular cuánto dinero (en pesos) tiene un Banco, en una sucursal específica, 
conociendo las cantidades que posee de cada valor posible de las monedas en 
vigencia:2$, 1$, 50 centavos, 25 centavos, 10 centavos y 5 centavos. Por ejemplo: la sucursal de Guaymallén, 
tiene 257 monedas de 2$, 5300 monedas de 1$, 2400 monedas de 50 centavos, 6108 monedas de 10 centavos, 2357 monedas de 5 centavos y
 no tiene monedas de 25 centavos. Se informará: “TOTAL DISPONIBLE SUCURSAL Guaymallén $ X.XXX,XX. 
 */


#include <iostream>
using namespace std;

main(){
    //float moneda2 = 2, moneda1 = 1, centavos50 = 0.50, cetanvos25 = 0.25, centavos10 = 0.10, centavos5 = 0.5;
    float Dinero_Total; 
    float Cantidadmoneda2, Cantidadmoneda1, Cantidadcentavos50, Cantidadcetanvos25, Cantidadcentavos10, Cantidadcentavos5;
    float TotalMoneda2, TotalMoneda1, totalCentavos50, TotalCentavos25, TotalCentavos10, TotalCentavos5; 


    cout<<"||SUCURSAL X|| Calcular capital en efectivo... \nPorfavor Ingrese La Cantidad De Monedas Que Segun Le Va Especificiando\n";
    cout<<"Monedas De $2: ";
    cin>>Cantidadmoneda2;
        cout<<"Monedas De $1: ";
    cin>>Cantidadmoneda1;
        cout<<"Monedas De $0.50: ";
    cin>>Cantidadcentavos50;
        cout<<"Monedas De $0.25: ";
    cin>>Cantidadcetanvos25;
        cout<<"Monedas De $0.10: ";
    cin>>Cantidadcentavos10;
        cout<<"Monedas De $0.5: ";
    cin>>Cantidadcentavos5;

    TotalMoneda2 = Cantidadmoneda2 * 2;
    TotalMoneda1 = Cantidadmoneda1 * 1;
    totalCentavos50 = Cantidadcentavos50 * 0.50;
    TotalCentavos25 = Cantidadcetanvos25 * 0.25;
    TotalCentavos10 = Cantidadcentavos10 * 0.10;
    TotalCentavos5 = Cantidadcentavos5 * 0.5;

    Dinero_Total = TotalMoneda2 +TotalMoneda1+totalCentavos50+ TotalCentavos25+ TotalCentavos10+ TotalCentavos5;
    cout<<"\n\n -------------------------------------------\n";
    cout<<"TOTAL DISPONIBLE SUCURSAL Guaymallen: $"<<Dinero_Total<<"\n";
    system("pause");

}
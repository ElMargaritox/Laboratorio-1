
//5.	Determinar cuál es el número que más se repite en un array.

#include <iostream>
using namespace std;

main(){

 int numeros[10] = {5,5,5,5, 3,3,3,3,3,3};
 int n,
     q,
     x = 0,
     numero = 0,
     repetidor = 0;

for (int i = 0; i < 10; i++)
{
    n = numeros[i];
    if(n != 0){
        for (int e = 0; e < 10; e++)
        {
            if(n == numeros[e]){
                x++;
                q = numeros[i];
            }
        }

        if(x >= repetidor){
            numero = q; 
            repetidor = x;
        }
        x = 0;
    }

    

}


system("cls");
    cout<<"El Numero Que Mas Se Repite Es:"<<numero<<endl;
    cout<<"Con Un Total De:"<<repetidor<<" Repeticiones"<<endl;
    system("pause>nul");
}
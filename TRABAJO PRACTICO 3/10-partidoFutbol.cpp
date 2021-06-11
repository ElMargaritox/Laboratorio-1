#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int sacarPromedio(int *goles, int fechas);

main(){
    int vistaGeneral[50][2];
    int anotadosRecibidos[100];
    int fechaGoleadora,fechaDerrota;
    int anotados = 0; 
    int recibidos = 0;

    //cargo de forma random los 50 partidos y sus anotaciones.
    srand(time(NULL));
    for(int i = 0; i<=49; i++){
        for(int j = 0; j <= 1; j++){
            vistaGeneral[i][j] = 1+rand()%(6-1);
        }
    }

    //evaluo el promedio ((cambiar nombre de los indices)) 
    for (int i = 0; i<=49; i++){
        int comparador;
        for (int j = 0; j<= 1; j++){
            //gol de UDA
            if(vistaGeneral[i][j] != vistaGeneral[i][1]){
                comparador = vistaGeneral[i][j];
                anotados = anotados + vistaGeneral[i][j];
                i--;
                if(vistaGeneral[i][j] < comparador){
                    i++;
                    fechaGoleadora = i;
                }else{
                    i++;
                }
            }else{
                comparador = vistaGeneral[i][j];
                recibidos = recibidos + vistaGeneral[i][j];
                i--;
                if(vistaGeneral[i][j] < comparador){
                    i++;
                    fechaDerrota = i;
                }else{
                    i++;
                }
            }
        }
    }

    sacarPromedio(&anotados, 50); 
    sacarPromedio(&recibidos, 50); 

    //evaluo en qué fecha la UDA (indice: 0) hizo más goles
   cout<<"El promedio de goles anotado es de: "<<anotados<<endl;
   cout<<"El promedio de goles recibidos es de: "<<recibidos<<endl;
   cout<<"La fecha que la UDA salio mas victoriosa fue la fecha: "<<fechaGoleadora<<endl;
   cout<<"La fecha que la UDA salio mas goleada fue la fecha: "<<fechaDerrota<<endl;

} 

int sacarPromedio(int *goles, int fechas){
    *goles = *goles / fechas;
}
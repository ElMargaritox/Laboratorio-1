#include <iostream>
using namespace std;

main(){

    int numsUno[5];
    int numsDos[5]; 
    int numsTres[10];

    for (int i = 0; i < 5; i++){
        numsUno[i]=numsUno[i] + 2;
        numsDos[i]=numsDos[i] + 6;
    }

    for (int i = 0; i < 5; i++) {
            numsTres[i]=numsUno[i];
    }

    for (int i = 0; i < 5; i++) {
            numsTres[i + 5] =numsDos[i];
    }

    cout<<"La mezcla es... "<<endl;

    for (int i = 0; i < 10; i++) {
        cout<<numsTres[i]<<"\t";
    }

}
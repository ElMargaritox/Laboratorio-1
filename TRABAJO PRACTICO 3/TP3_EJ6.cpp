//6.	Determinar si una cadena de texto es palíndromo. 
//Es decir, que se lee igual de derecha a izquierda, que de izquierda a derecha. 
//Por ejemplo: “NEUQUEN”, “SOMOS”.

#include <iostream>
#include <string>
using namespace std;

main(){
    string text1 = "SOMOS";
    string text2 = "NEUQUEN";

    if(text1 == string(text1.rbegin(), text1.rend())){
        cout<<"El Texto1 Es Palindromo"<<endl;
    }
    else{
        cout<<"El Texto1 No Es Palindromo"<<endl;
    }

        if(text2 == string(text2.rbegin(), text2.rend())){
        cout<<"El Texto2 Es Palindromo"<<endl;
    }
    else{
        cout<<"El Texto2 No Es Palindromo"<<endl;
    }

    system("pause>nul");
}
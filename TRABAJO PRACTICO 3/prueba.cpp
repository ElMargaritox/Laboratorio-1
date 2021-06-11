#include <iostream>
#include <string>
using namespace std;

// VOID -  FUNCION
// STRING - RETORNA UN STRING
// INT - RETORNA UN ENTERO
// CHAR - RETORNA UN CARACTER
// FLOAT - RETORNA UN NUMERO CON  COMA

#pragma region ControlMenus





void MenuCabecera(int identificador){system("cls");
        if(identificador == 0){cout<<"-=== MENU PRINCIPAL ===-"<<endl;}
        else{cout<<"-=== MENU SECUNDARIO ===-"<<endl;
        }
    }
 
void Menu(int identificador){
    if(identificador == 0){  cout<<"-=== MENU ===-"<<endl;cout<<"1 - Jugar"<<endl;cout<<"2 - Opciones"<<endl;cout<<"3 - Funcion 3"<<endl;}
    else if(identificador == 1){cout<<"-=== MENU ===-"<<endl;cout<<"1 - Nueva Partida"<<endl;cout<<"2 - Guardar Partida"<<endl;cout<<"3 - Borrar Partida"<<endl;}
    else{cout<<"Error Bien Geimer"<<endl;}} 

    // Esto Muestra Los Menus Al Usuario 

#pragma endregion
main(){
int opcion;
    do{cout<<"Que Menu Queres"<<endl;cin>>opcion;MenuCabecera(opcion); Menu(opcion); }while (opcion = 100);
    }
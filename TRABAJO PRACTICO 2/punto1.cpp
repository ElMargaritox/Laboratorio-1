#include <iostream>
//#include "libs\\block_string.cpp" // https://github.com/ojeelafriend/lib_block_string

using namespace std;

/*
1.	Desarrolle un programa para que una inmobiliaria decida si invertir en una propiedad (o no) según: la ubicación, el precio, 
si es casa o departamento y si tiene cochera.  Si está en Godoy Cruz, y el precio es de hasta 70000$, 
invierte sin dudar (no importa nada más). En cambio, si el precio es mayor, sólo invierte si tiene cochera y 
es casa, caso contrario, no invierte. Si el precio es menor, debe ir a visitarla y averiguar más datos. Si está en Ciudad,
 y el precio es mayor a 100000$ no invierte.  Si es menor y  es casa, invierte. Si es departamento, solo con cochera invierte,
  caso contrario, debe averiguar si hay cocheras próximas.  Si está en Las Heras, sólo en departamentos con cochera invierte,
   caso contrario, no invierte.
*/




main(){

char condition,
     inmobilaria;
int precio,
    cochera,
    ubicacion;
bool exit;



do
{

cout << "¿Quieres Invertir En Una Propiedad? (y/n)";
cin >> condition;

tolower(condition);

   switch (condition)
    {
    case 'Y': case 'y':  
    
    

    do
    {
       cout<<"     PROPIEDADES   "<<endl;
       cout<<"===================="<<endl;
       cout<<"1: Propiedad En Las Heras"<<endl;
       cout<<"2: Propiedad En Ciudad"<<endl;
       cout<<"3: Propiedad En Godoy Cruz"<<endl;
       cout<<"===================="<<endl;
       cout<<"Ingresa El Numero De La Propiedad Elejida: "<<endl;
       cin>>ubicacion;

         switch (ubicacion)
         {
         case 1:
            cout<<"Has Seleccionado. Las Heras"<<endl;
            break;
         case 2:
            cout<<"Has Seleccionado. Ciudad"<<endl;
            break;
         case 3:
            cout<<"Has Seleccionado. Godoy Cruz"<<endl;
            break;  
         default:
            system("cls");
            cout<<" - No Has Seleccionado Ninguna Propiedad. Intenta Nuevamente"<<endl<<endl;
            break;
         }


    } while (ubicacion <=0 || ubicacion >3);
    

    cout<<"Ingrese El valor De La Propiedad: "<<endl;
    cin>>precio;


    //haciendo la wuea fome weon malo qlo

    if(ubicacion == 3){
       if(precio >= 55000 & precio <= 70000){
          cout<<"Se Compro Solo UwU";
          system("pause");
       }
       else if(precio > 70000){
          cout<<"Tienes Que Visitar La Propiedad Personalmente"<<endl;

          do
          {
             cout<<"------------------"<<endl;
             cout<<"1: Casa"<<endl;
             cout<<"2: Departamento"<<endl;
             cout<<"------------------"<<endl;
             cin>>inmobilaria;

             switch (inmobilaria)
             {
             case 1: 
                cout<<"Has Seleccionado. Casa"<<endl;
                break;
             case 2: 
                cout<<"Has Seleccionado. Departamento"<<endl;
                break;
             default:
                system("cls");
                cout<<" - No Has Seleccionado El Dato"<<endl<<endl; 
             }

          } while (inmobilaria == 1 || inmobilaria == 2);
          
          do
          {
             cout<<"------------------"<<endl;
             cout<<"1: Con Cochera"<<endl;
             cout<<"2: Sin Cochera"<<endl;
             cout<<"------------------"<<endl;
             cin>>cochera;

             switch (cochera)
             {
             case 1: 
                cout<<"Has Seleccionado. Con Cochera"<<endl;
                break;
             case 2: 
                cout<<"Has Seleccionado. Sin cochera"<<endl;
                break;
             default:
                system("cls");
                cout<<" - No Has Seleccionado El Dato"<<endl<<endl; 
             }
          } while (cochera == 1 || cochera == 2);
          

            if(inmobilaria == 1 & cochera == 1){
               cout<<"Compraste La Propiedad"<<endl;
               system("pause");
            }
            else{
               cout<<"No Compras La Propiedad, No Cumple Los Requisitos"<<endl;
               
            }


       }
    }
    else if(ubicacion == 2){
       if(precio > 100000){
          cout<<"No Se Invierte POrque Supera Los 100.000$"<<endl;
          system("pause");
       }
         do
          {
             cout<<"------------------"<<endl;
             cout<<"1: Casa"<<endl;
             cout<<"2: Departamento"<<endl;
             cout<<"------------------"<<endl;
             cin>>inmobilaria;

             switch (inmobilaria)
             {
             case 1: 
                cout<<"Has Seleccionado. Casa"<<endl;
                break;
             case 2: 
                cout<<"Has Seleccionado. Departamento"<<endl;
                break;
             default:
                system("cls");
                cout<<" - No Has Seleccionado El Dato"<<endl<<endl; 
             }

          } while (inmobilaria == 1 || inmobilaria == 2);
          
          do
          {
             cout<<"------------------"<<endl;
             cout<<"1: Con Cochera"<<endl;
             cout<<"2: Sin Cochera"<<endl;
             cout<<"------------------"<<endl;
             cin>>cochera;

             switch (cochera)
             {
             case 1: 
                cout<<"Has Seleccionado. Con Cochera"<<endl;
                break;
             case 2: 
                cout<<"Has Seleccionado. Sin cochera"<<endl;
                break;
             default:
                system("cls");
                cout<<" - No Has Seleccionado El Dato"<<endl<<endl; 
             }
          } while (cochera == 1 || cochera == 2);


       if(inmobilaria == 1){
          cout<<"Has Comprado La Propiedad"<<endl;
       }
       else if(inmobilaria == 2 & cochera == 1){
          cout<<"Has Comprado La Propiedad"<<endl;
       }
       else{
          cout<<"No Compras La Propiedad, No Cumples Los Requisitos"<<endl;
       }
    }

    else if(ubicacion == 1){
         do
          {
             cout<<"------------------"<<endl;
             cout<<"1: Casa"<<endl;
             cout<<"2: Departamento"<<endl;
             cout<<"------------------"<<endl;
             cin>>inmobilaria;

             switch (inmobilaria)
             {
             case 1: 
                cout<<"Has Seleccionado. Casa"<<endl;
                break;
             case 2: 
                cout<<"Has Seleccionado. Departamento"<<endl;
                break;
             default:
                system("cls");
                cout<<" - No Has Seleccionado El Dato"<<endl<<endl; 
             }

          } while (inmobilaria > 2);
          
          do
          {
             cout<<"------------------"<<endl;
             cout<<"1: Con Cochera"<<endl;
             cout<<"2: Sin Cochera"<<endl;
             cout<<"------------------"<<endl;
             cin>>cochera;

             switch (cochera)
             {
             case 1: 
                cout<<"Has Seleccionado. Con Cochera"<<endl;
                break;
             case 2: 
                cout<<"Has Seleccionado. Sin cochera"<<endl;
                break;
             default:
                system("cls");
                cout<<" - No Has Seleccionado El Dato"<<endl<<endl; 
             }
          } while (cochera == 1 || cochera == 2);

         if(inmobilaria == 2 & cochera == 1){
            cout<<"Compras Esta Propiedad"<<endl;
         }
         else{
            cout<<"No Compras Esta Propeidad"<<endl;
         }
    }
    


system("pause");
    break;
    case 'N': case 'n':
    cout << "Saliendo..."<<endl;
    exit = true;
    break;
    default:
    system("cls");
    cout << "Tienes Que Escribir, [Y] o [N]"<<endl;
    break;
    }     
} while (!exit);
    


    

    
system("pause");
}


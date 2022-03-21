#include<iostream>
#include"Administracion.h"


using namespace std;

void main(){
    Administracion Administracion;
    int opc;
    int opcf;
    int radio;
    int lado;
    int base;
    int altura;
    do{
        cout<<"1. Agregar \n";
        cout<<"2. Listar \n";
        cout<<"3. Sumar Areas \n";
        cout<<"0. Salir \n";
        cin>>opc;

        switch (opc)
        {
        case 1:
            cout<<"Que figura deseas crear ? \n";
            cout<<"1. Cuadrado \n";
            cout<<"2. Circulo \n";
            cout<<"3. Rectangulo \n";
            cin>>opcf;
            switch (opcf)
            {
            case 1:
                cout<<"Por favor digite el largo de sus lados \n";
                cin>>lado;
                Cuadrado figura(lado);
                Administracion.agregar(figura);
                break;
            case 2:
                cout<<"Por favor digite el largo de sus base \n";
                cin>>base;
                cout<<"Por favor digite el largo de su altura \n";
                cin>>altura;
                Rectangulo figura(base , altura);
                Administracion.agregar(figura);
                break;
            case 3:
                cout<<"Por favor digite el largo de su radio \n";
                cin>>radio;
                Circulo figura(radio);
                Administracion.agregar(figura);
                break;
            
            }
            
            break;
        case 2:
            Administracion.listar();
            break;
        case 3:
            Administracion.sumarAREAS();
            break;
        case 0:
            
            break;
        default:
            cout<<"Digite una opcion valida";
            break;
        }
    }while (opc != 0);
}
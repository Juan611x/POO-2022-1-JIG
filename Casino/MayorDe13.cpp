//
// Created by Juan on 5/04/2022.
//

#include "MayorDe13.h"
#include <stdlib.h>
#include <time.h>

MayorDe13::MayorDe13(): Juego("Mayor de 13") {

}

int MayorDe13::setNumero(){
    srand(time(NULL));
    int numero = rand()%(14-1);
    return numero;
}

void MayorDe13::Jugar(int * apuesta) {
    int opcion;
    numeroJugador = setNumero();
    cout<<"Tu numero es: "<<numeroJugador<<"\n";
    cout<<"Diseas seguir con el juego?\nRecuerda que si abandonas el juego perseras solo la midad de tu apuesta\n1.Si  0.No\n";
    cin>>opcion;

    if(opcion == 0){

    } else{

    }
    numeroCasino = setNumero();
    cout<<"El numero del Casino es: "<<numeroCasino<<"\n";

}

void MayorDe13::mostrarReglas() const {
    cout<<"Mayor De 13:\n";
    cout<<"===========\n\n";
    cout<<"En caso de que el usuario saque un número menor o igual que el casino, perderá todo lo apostado.\n"
          "En otro caso, el usuario ganará el doble de lo apostado.\n";

}

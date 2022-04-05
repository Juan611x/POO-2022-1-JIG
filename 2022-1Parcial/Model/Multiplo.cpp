//
// Created by Juan on 5/04/2022.
//

#include "Multiplo.h"


float Multiplo::jugar(float gonzosApostar) {
    mostrarReglas();
    float gonzosResultado;
    int seguir = 0;

    srand(time(nullptr));
    do{
        numeroJugador = rand() % 101 + 1;
        cout<<"Tu numero es: "<<numeroJugador<<"\n";
        numeroCasino = rand() % 101 + 1;
        cout<<"El numero del casino es: "<<numeroCasino<<"\n";
        if(numeroCasino % 3 == 0){
            seguir = 1;
        }
        if(numeroJugador % 3 == 0){
            seguir = 1;
        }
    } while(seguir == 0);

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Multiplo::calcularResultado(float gonzosApostar) {
    float maxResult = 2;
    float lowestResult = 0;
    if(numeroJugador % 3 == 0){
        return maxResult * gonzosApostar;
    } else if (numeroCasino % 3 == 0){
        return lowestResult;
    }
}

void Multiplo::mostrarReglas() {
    cout<<"Cada turno se genera un numero para cada uno gana el primero que saque un numero que sea multiplo de 3."
          "en caso de ganar el Usuario duplica su apuesta, en caso de perder pierde todo.\n";
}
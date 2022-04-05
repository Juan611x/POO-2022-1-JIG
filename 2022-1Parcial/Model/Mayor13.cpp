//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    mostrarReglas();
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;


    srand(time(nullptr));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {

    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}

void Mayor13::mostrarReglas() {
    cout<<"El sistema genera un nemero aleatoria entre 1 y 13 para el usuario y otro para el Casino, gana el que saque el numero mas grande.\n"
          "En caso de que saquen el mismo numero empatan y el usuario pierde.\n"
          "despúed de generar el numero del Usuario se puede decidir de abandonar en juego en cuyo caso solo pierde la mitat de la apuesta inicial.\n";
}

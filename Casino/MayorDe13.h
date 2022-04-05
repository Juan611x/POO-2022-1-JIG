//
// Created by Juan on 5/04/2022.
//

#ifndef CASINO_MAYORDE13_H
#define CASINO_MAYORDE13_H

#include<iostream>
#include "Juego.h"
using std::cin;
using std::cout;
using std::string;

class MayorDe13: public Juego{
private:
    int numeroJugador;
    int numeroCasino;
public:
    MayorDe13();

    int setNumero();

    virtual void Jugar(int *) ;
    virtual double calcularResultado(const int &)const ;
    virtual void mostrarReglas()const ;


};


#endif //CASINO_MAYORDE13_H

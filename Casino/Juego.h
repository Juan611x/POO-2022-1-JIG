//
// Created by Juan on 5/04/2022.
//

#ifndef CASINO_JUEGO_H
#define CASINO_JUEGO_H

#include<iostream>

using std::cin;
using std::cout;
using std::string;

class Juego {
private:
    string nombreDelJuego;
public:
    Juego(const string &);

    virtual void Jugar()const = 0;
    virtual double calcularResultado(const int &)const = 0;
    virtual void mostrarReglas()const = 0;

};


#endif //CASINO_JUEGO_H

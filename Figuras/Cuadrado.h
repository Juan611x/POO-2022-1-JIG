#ifndef CUADRADO_H
#define CUADRADO_H

#include<iostream>
#include"FigurasGeo.h"

using std::cout;
using std::string;

class Cuadrado : public FigurasGeo{
    private:
        int lado;
    public:
        Cuadrado();
        Cuadrado(int lado);
        float calcularArea();
        float calcularPerimetro();
        void dibujarFigura();
    
};
#endif
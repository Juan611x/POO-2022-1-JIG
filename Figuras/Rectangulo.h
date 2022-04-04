#ifndef RECTANGULO_H
#define RECTANGULO_H


#include<iostream>
#include"FigurasGeo.h"

using std::cout;
using std::string;

class Rectangulo : public FigurasGeo{
    private:
        int base;
        int altura;
    public:
        Rectangulo();
        Rectangulo(int base, int altura);
        float calcularArea();
        float calcularPerimetro();
        void dibujarFigura();
    
};

#endif
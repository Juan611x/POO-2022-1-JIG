#ifndef CIRCULO_H
#define CIRCULO_H

#include<iostream>
#include"FigurasGeo.h"

using std::cout;
using std::string;

class Circulo : public FigurasGeo{
    private:
        int radio;
    public:
        Circulo(int radio);
        float calcularArea();
        float calcularPerimetro();
        void dibujarFigura();
    
};

#endif
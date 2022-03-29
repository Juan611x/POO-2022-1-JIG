//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_FIGURAS_H
#define HERENCIA_FIGURAS_FIGURAS_H
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
//#include <numbers>
#include <iomanip>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::vector;
using std::pow;
using std::string;

class Figura{
private:

protected:
    float area;
    float perimetro;
public:
    Figura();
    virtual float obtenerArea()  = 0 ;
    virtual float  obtenerPerimetro()  = 0 ;
    virtual void imprimirFigura()  = 0 ;
    void imprimirFigurasColor ( char  color );

};

#endif //HERENCIA_FIGURAS_FIGURAS_H

#ifndef HERENCIA_FIGURAS_TRIANGULO_H
#define HERENCIA_FIGURAS_TRIANGULO_H
#include "Figuras.h"

class Triangulo : public Figura{
private:
    float Altura;
    float Base;
public:
    Triangulo();
    Triangulo( float Base, float Altura );
    float obtenerArea();
    float obtenerPerimetro();
    void imprimirFigura();
};

#endif //HERENCIA_FIGURAS_TRIANGULO_H
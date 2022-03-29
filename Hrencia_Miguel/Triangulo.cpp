#include "Triangulo.h"

Triangulo::Triangulo() {
    Base = 0;
    Altura = 0;
}

Triangulo::Triangulo(float Base, float Altura) {
    this->Base = Base;
    this->Altura = Altura;
}

float Triangulo::obtenerArea() {
    float Area;
    Area = Base * Altura;
    return Area/2;
}

float Triangulo::obtenerPerimetro() {
    float Perimetro;
    Perimetro = Base + Altura + (pow((Base * Base) - (Altura * Altura), 1/2));
    return  Perimetro;
}

void Triangulo::imprimirFigura() {
    cout<<"x";
    cout<<"x  x";
    cout<<"x    x";
    cout<<"x      x";
    cout<<"x        x";
    cout<<"xxxxxxxxxxx";
}
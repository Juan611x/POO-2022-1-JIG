//
// Created by migue on 20/03/2022.
//

#include "Figuras.h"

Figura::Figura() {
}
/*
void Figura::imprimirFigura() { 
}

float Figura::obtenerPerimetro() {
    return 0;
}

float Figura::obtenerArea() {
    return 0;
}
*/
void Figura::imprimirFigurasColor( char  color){
    char * indicacion = "color " ;
    indicacion += color;
    system(indicacion);
    this -> imprimirFigura();
}



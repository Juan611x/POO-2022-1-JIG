#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include<iostream>
#include<vector>
#include"Circulo.h"
#include"Rectangulo.h"
#include"Cuadrado.h"
#include"FigurasGeo.h"

using std::cout;
using std::string;
using std::vector;

class Administracion{
    private:   
        vector<FigurasGeo> figuras;
    public:
        void agregar(FigurasGeo figura);
        void listar();
        void sumarAREAS();
    
};


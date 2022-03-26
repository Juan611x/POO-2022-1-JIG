#ifndef FIGURASGEO_H
#define FIGURASGEO_H

#include<iostream>

using std::cout;
using std::string;

class FigurasGeo{
    private:
        /*float area;
        float perimetro;*/
    public:
        virtual float calcularArea();
        virtual float calcularPerimetro();
        virtual void dibujarFigura();
        /*
        void setArea(float area);
        void setPerimetro(float perimetro);
        float getArea();
        float getPerimetro();*/
    
};

#endif
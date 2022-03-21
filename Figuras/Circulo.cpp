#include<iostream>
#include"Circulo.h"


Circulo::Circulo(int radio){
    this -> radio = radio;
}

float Circulo::calcularArea(){
    return (radio * radio) * 3.1416;
}

float Circulo::calcularPerimetro(){
    return 2 * 3.21416 * radio ;
}

void Circulo::dibujarFigura(){
    cout<<"Circulo \n";

    cout<<"     xxx";
    cout<<"  x        x";
    cout<<"x            x";
    cout<<"x            x";
    cout<<"x            x";
    cout<<"  x        x";
    cout<<"     xxx";
}
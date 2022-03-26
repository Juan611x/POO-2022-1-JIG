#include<iostream>
#include"Administracion.h"

void Administracion::agregar(FigurasGeo * figura){
    figuras.push_back(figura);
}

void Administracion::listar(){
    for(int i = 0; i < figuras.size(); i++ ){
        figuras[i] -> dibujarFigura();
        cout<<"\n";
        cout<<"Area:"<< figuras[i] -> calcularArea()<<"\n";
        cout<<"Perimetro"<<figuras[i] -> calcularPerimetro()<<"\n";
    }
}

void Administracion::sumarAREAS(){
    int total = 0;
    for(int i = 0; i < figuras.size(); i++ ){
        total += figuras[i] -> calcularArea();
    }
    cout<<"La suma de las areas es: "<< total <<"\n";
}

Administracion::~Administracion(){
    for (int i = 0; i < figuras.size() ; i++)
    {
        FigurasGeo * tempFiguras = figuras[i];
        delete tempFiguras;
    }
    
}
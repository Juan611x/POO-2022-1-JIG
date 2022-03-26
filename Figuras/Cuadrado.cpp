#include<iostream>
#include"Cuadrado.h"

Cuadrado::Cuadrado(int lado){
    this -> lado = lado;
}

float Cuadrado::calcularArea(){
    return lado * lado;
}

float Cuadrado::calcularPerimetro(){
    return lado * 4;
}

void Cuadrado::dibujarFigura(){
    cout<<"Cuadrado \n";
    for(int i = 0; i < 5 ; i++){
        for(int x = 0; x < 5; x++){
            if(i == 0 || i == 5){
                cout<<"x";
            }
            else{
                if(x == 0 || x == 5){
                    cout<<"x";
                }
            }
        }
        cout<<"\n";
    }
}

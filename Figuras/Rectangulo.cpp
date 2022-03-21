#include<iostream>
#include"Rectangulo.h"

Rectangulo::Rectangulo(int base, int altura){
    this -> base = base;
    this -> altura = altura;
}

float Rectangulo::calcularArea(){
    return base * altura;
}

float Rectangulo::calcularPerimetro(){
    return (base * 2) + (altura * 2);
}

void Rectangulo::dibujarFigura(){
    cout<<"Rectangulo \n";
    for(int i = 0; i < 5 ; i++){
        for(int x = 0; x < 8; x++){
            if(i == 0 || i == 5){
                cout<<"x";
            }
            else{
                if(x == 0 || x == 8){
                    cout<<"x";
                }
            }
        }
        cout<<"\n";
    }

}
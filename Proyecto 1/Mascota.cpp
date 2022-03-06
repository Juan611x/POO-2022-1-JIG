#include<iostream>

#include"Mascota.h"



Mascota::Mascota(int Tipo, string Raza, float Peso, int Eedad, int TipoDeSangre, string Nombre, int Identificacion, bool Estatus){
    this -> Tipo = Tipo;
    this -> Raza = Raza;
    this -> Peso = Peso;
    this -> Edad = Edad;
    this -> TipoDeSangre = TipoDeSangre;
    this -> Nobre = Nobre;
    this -> Identificacion = Identificacion;
    this -> Estatus = Estatus;
}
Mascota::Mascota(int Tipo, string Raza, float Peso, int Eedad, int TipoDeSangre, string Nombre, int Identificacion, bool Estatus, string FechaDefuncion){
    this -> Tipo = Tipo;
    this -> Raza = Raza;
    this -> Peso = Peso;
    this -> Edad = Edad;
    this -> TipoDeSangre = TipoDeSangre;
    this -> Nobre = Nobre;
    this -> Identificacion = Identificacion;
    this -> Estatus = Estatus;
    this -> FechaDefuncion = FechaDefuncion;
}

int Mascota::getTipo(){
    return this -> Tipo;
}
string Mascota::getRaza(){
    return this -> Raza;
}
float Mascota::getPeso(){
    return this -> Peso;
}
int Mascota::getEdad(){
    return this -> Edad;
}
int Mascota::getTipoDeSangre(){
    return this -> TipoDeSangre;
}
string Mascota::getNombre(){
    return this -> Nobre;
}
int Mascota::getIdentificacion(){
    return this -> Identificacion;
}
bool Mascota::getEstatus(){
    return this -> Estatus;
}
string Mascota::getFechaDefuncion(){
    return this -> FechaDefuncion;
}


void Mascota::agregarDueño(Propietario dueño){
    dueños.push_back(dueño);
}


void Mascota::ImprimitInformacionM(){
    cout<<"Tipo: "<< this -> Tipo <<"/n";
    cout<<"Raza: "<< this -> Raza <<"/n";
    cout<<"Nombre: "<< this -> Nobre <<"/n";
    cout<<"Peso: "<< this -> Peso <<"\n";
    cout<<"Edad: "<< this -> Edad <<"/n";
    cout<<"Tipo de sangre: " << this -> TipoDeSangre << "\n";
    cout<<"Identidficacion: " << this -> Identificacion <<"\n";
    if(this -> Estatus){
        cout<<"Estatus: Vivo"<< "\n";
    }else{
        cout<<"Estatus: Muerto"<< "\n";
        cout<<"Fecha defuncion: "<< this -> FechaDefuncion << "\n";
    }
}


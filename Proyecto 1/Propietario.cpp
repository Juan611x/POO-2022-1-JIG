#include<iostream>
#include"Propietario.h"

using std::cout;
using std::cin;


void Propietario::setNombre(string Nombre){
    this -> Nombre = Nombre;
}

string Propietario::getNombre(){
    return this -> Nombre;
}

void Propietario::setEmail(string Email){
    this -> Email = Email;
}

string Propietario::getEmail(){
    return this -> Email;
}

void Propietario::setTelefono(int Telefono){
    this -> Telefono = Telefono;
}

int Propietario::getTelefono(){
    return this -> Telefono;
}

void Propietario::setDocumentoDeIdentidad(int DocumentoDeIdentidad){
    this -> DocumentoDeIdentidad = DocumentoDeIdentidad;
}

string Propietario::getNombre(){
    return this -> DocumentoDeIdentidad;
}

Propietario::Propietario(string Nombre, string Email, int Telefono, int Documento){
    this -> Nombre = Nombre;
    this -> Email = Email;
    this -> Telefono = Telefono;
    this -> DocumentoDeIdentidad = DocumentoDeIdentidad;
}
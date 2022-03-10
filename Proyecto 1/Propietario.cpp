#include <iostream>
#include "Propietario.h"


Propietario::Propietario(string Nombre, string Email, int Telefono, int Documento){
    this -> nombre = Nombre;
    this -> email = Email;
    this -> telefono = Telefono;
    this -> documentoDeIdentidad = documentoDeIdentidad;
}

Propietario::Propietario():nombre(),email(),telefono(),documentoDeIdentidad(){

}

void Propietario::ImprimitInformacionP(){
    cout<<"Nombre: "<< this -> nombre << "\n";
    cout<<"Email: "<< this -> email << "\n" ;
    cout<<"Telefono: "<< this -> telefono << "\n";
    cout<<"Documento de Identidad: "<< this -> documentoDeIdentidad << "\n";
    /*
    cout<<"Mascotas:\n";
    for(int i = 0; i < enlaces.size(); i++){
        if(enlaces[i].getPropietario().getDocumentoDeIdentidad() == this -> documentoDeIdentidad){
            cout<<enlaces[i].getMascota().getNombre();
        }
    }*/
}

void Propietario::setNombre(string Nombre){
    this -> nombre = Nombre;
}

string Propietario::getNombre(){
    return this -> nombre;
}

void Propietario::setEmail(string Email){
    this -> email = Email;
}

string Propietario::getEmail(){
    return this -> email;
}

void Propietario::setTelefono(int Telefono){
    this -> telefono = Telefono;
}

int Propietario::getTelefono(){
    return this -> telefono;
}

void Propietario::setDocumentoDeIdentidad(int DocumentoDeIdentidad){
    this -> documentoDeIdentidad = DocumentoDeIdentidad;
}

int Propietario::getDocumentoDeIdentidad(){
    return this -> documentoDeIdentidad;
}


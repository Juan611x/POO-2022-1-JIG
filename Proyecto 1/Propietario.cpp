#include <iostream>
#include "Propietario.h"

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
    this -> documentoDeIdentidad = DocumentoDeIdentidad;
}

int Propietario::getDocumentoDeIdentidad(){
    return this -> documentoDeIdentidad;
}

Propietario::Propietario(string Nombre, string Email, int Telefono, int Documento){
    this -> Nombre = Nombre;
    this -> Email = Email;
    this -> Telefono = Telefono;
    this -> documentoDeIdentidad = documentoDeIdentidad;
}

Propietario::Propietario():Nombre(),Email(),Telefono(),documentoDeIdentidad(){

}

void Propietario::ImprimitInformacionP(){
    cout<<"Nombre: "<< this -> Nombre << "\n";
    cout<<"Email: "<< this -> Email << "\n" ;
    cout<<"Telefono: "<< this -> Telefono << "\n";
    cout<<"Documento de Identidad: "<< this -> documentoDeIdentidad << "\n";
    /*
    cout<<"Mascotas:\n";
    for(int i = 0; i < enlaces.size(); i++){
        if(enlaces[i].getPropietario().getDocumentoDeIdentidad() == this -> documentoDeIdentidad){
            cout<<enlaces[i].getMascota().getNombre();
        }
    }*/
}
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

void Propietario::ImprimitInformacionP(Administracion administracion){
    cout<<"Nombre: "<< this -> Nombre << "\n";
    cout<<"Email: "<< this -> Email << "\n" ;
    cout<<"Telefono: "<< this -> Telefono << "\n";
    cout<<"Documento de Identidad: "<< this -> documentoDeIdentidad << "\n";
    cout<<"\nMascota: \n";
    for(int i = 0; i < vMascotas.size(); i++){
        cout<< vMascotas[i].getNombre()<<"\n";
    }

    int opc2;
    cout<<"1. agregar dueño\n0. salit\n";
    cin>>opc2;
    if(opc2 == 1){
        int op;
        administracion.Listar2M(administracion);
        cout<<"Digita un valor";
        cin>>op;
        agregarMascota(administracion.getMascota(op));
    }else{

    }
}

void Propietario::agregarMascota(Mascota mascota){
    vMascotas.push_back(mascota);
}
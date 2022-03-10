#include <iostream>
#include "Mascota.h"


Mascota::Mascota():Tipo(),Raza(),Peso(),Edad(),TipoDeSangre(),Nobre(),Identificacion(),Estatus(),FechaDefuncion(){

}

Mascota::Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus){
    this -> Tipo = Tipo;
    this -> Raza = Raza;
    this -> Peso = Peso;
    this -> Edad = Edad;
    this -> TipoDeSangre = TipoDeSangre;
    this -> Nobre = Nobre;
    this -> Identificacion = Identificacion;
    this -> Estatus = Estatus;
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
    /*
    cout<<"Popietarios";
    for(int i = 0; i < enlaces.size(); i++){
        if(enlaces[i].getMascota().getIdentificacion() == this -> Identificacion){
            cout<<enlaces[i].getPropietario().getNombre();
        }
    }*/
}


string Mascota::getTipo(){
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
string Mascota::getTipoDeSangre(){
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

void Mascota::setEdad(int edad){
    this -> Edad = edad;
}

void Mascota::setFechaDefuncion(string fecha){
    this -> FechaDefuncion = fecha;
}

void Mascota::setIdentificacion(int identificacion){
    this -> Identificacion = identificacion;
}

void Mascota::setNombre(string nombre){
    this -> Nobre = nombre;
}

void Mascota::setPeso(float peso){
    this -> Peso = Peso;
}

void Mascota::setRaza(string raza){
    this -> Raza = raza;
}

void Mascota::setStatus(bool status){
    this -> Estatus = status;
    string fecha;
    if(Estatus == false){
        cout<<"digite una fecha de defuncion";
        cin>>fecha;
        this -> setFechaDefuncion(fecha);
    }
}

void Mascota::setTipo(string tipo){
    this -> Tipo = tipo;
}

void Mascota::setTipoSangre(string fecha){
    this -> FechaDefuncion = fecha;
}

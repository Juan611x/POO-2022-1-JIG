#include <iostream>
#include "Mascota.h"


Mascota::Mascota():tipo(),raza(),peso(),edad(),tipoDeSangre(),nobre(),identificacion(),estatus(),fechaDefuncion(){

}

Mascota::Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus){
    this -> tipo = Tipo;
    this -> raza = Raza;
    this -> peso = Peso;
    this -> edad = edad;
    this -> tipoDeSangre = TipoDeSangre;
    this -> nobre = nobre;
    this -> identificacion = Identificacion;
    this -> estatus = Estatus;
}

void Mascota::imprimitInformacionM(){
    cout<<"Tipo: "<< this -> tipo <<"/n";
    cout<<"Raza: "<< this -> raza <<"/n";
    cout<<"Nombre: "<< this -> nobre <<"/n";
    cout<<"Peso: "<< this -> peso <<"\n";
    cout<<"Edad: "<< this -> edad <<"/n";
    cout<<"Tipo de sangre: " << this -> tipoDeSangre << "\n";
    cout<<"Identidficacion: " << this -> identificacion <<"\n";
    if(this -> estatus){
        cout<<"Estatus: Vivo"<< "\n";
    }else{
        cout<<"Estatus: Muerto"<< "\n";
        cout<<"Fecha defuncion: "<< this -> fechaDefuncion << "\n";
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
    return this -> tipo;
}
string Mascota::getRaza(){
    return this -> raza;
}
float Mascota::getPeso(){
    return this -> peso;
}
int Mascota::getEdad(){
    return this -> edad;
}
string Mascota::getTipoDeSangre(){
    return this -> tipoDeSangre;
}
string Mascota::getNombre(){
    return this -> nobre;
}
int Mascota::getIdentificacion(){
    return this -> identificacion;
}
bool Mascota::getEstatus(){
    return this -> estatus;
}
string Mascota::getFechaDefuncion(){
    return this -> fechaDefuncion;
}

void Mascota::setEdad(int edad){
    this -> edad = edad;
}

void Mascota::setFechaDefuncion(string fecha){
    this -> fechaDefuncion = fecha;
}

void Mascota::setIdentificacion(int identificacion){
    this -> identificacion = identificacion;
}

void Mascota::setNombre(string nombre){
    this -> nobre = nombre;
}

void Mascota::setPeso(float peso){
    this -> peso = peso;
}

void Mascota::setRaza(string raza){
    this -> raza = raza;
}

void Mascota::setStatus(bool status){
    this -> estatus = status;
    string fecha;
    if(estatus == false){
        cout<<"digite una fecha de defuncion";
        cin>>fecha;
        this -> setFechaDefuncion(fecha);
    }
}

void Mascota::setTipo(string tipo){
    this -> tipo = tipo;
}

void Mascota::setTipoSangre(string fecha){
    this -> fechaDefuncion = fecha;
}

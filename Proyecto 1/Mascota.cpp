#include<iostream>

#include"Mascota.h"
#include"Administracion.h"



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
Mascota::Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus, string FechaDefuncion){
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


void Mascota::agregarDueno(Propietario dueno){
    duenos.push_back(dueno);
}


void Mascota::ImprimitInformacionM(Administracion administracion){
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

    cout<<"Dueños";
    for(int i = 0; i < duenos.size(); i++){
        cout<< duenos[i].getNombre()<<"\n";
    }
    int opc2;
    cout<<"1. agregar dueño\n2. agregar Fecha de defuncion\n0. salit\n";
    cin>>opc2;
    if(opc2 == 1){
        int op;
        administracion.Listar2P(administracion);
        cout<<"Digita un valor";
        cin>>op;
        agregarDueno(administracion.getPropietario(op));
    }else if (opc2 == 2)
    {
        this -> Estatus == false;
        string fecha;
        cout<<"Digite la fecha de defuncion";
        cin>>fecha;
        this -> FechaDefuncion = fecha;
    }else{

    }
    
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

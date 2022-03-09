
#include <iostream>
#include "Administracion.h"


void Administracion::AgregarM(int identificacion){
    string fechaDefuncion;
    int identificacion;
    string nombre;
    string tipoDeSangre;
    int edad;
    float peso;
    string tipo;
    string raza;

    cout<<"Digite el Nombre: ";
    cin>>nombre;
    cout<<"Digite el Tipo: ";
    cin>>tipo;
    cout<<"Digite la raza: ";
    cin>>raza;
    cout<<"Digite el peso: ";
    cin>>peso;
    cout<<"Digite la edad: ";
    cin>>edad;
    cout<<"Digite el tipo de sangre: ";
    cin>>tipoDeSangre;
    cout<<"Digite la identificaion: ";
    cin>>identificacion;


    Mascota mascota(tipo, raza, peso, edad, tipoDeSangre, nombre, identificacion, true);
    Mascotas.insert(make_pair(identificacion, mascota));
}

void Administracion::EditarM(int identificacion){
    string fechaDefuncion;
    int Nidentificacion;
    string nombre;
    string tipoDeSangre;
    int edad;
    float peso;
    string tipo;
    string raza;

    cout<<"Digite el Nombre: ";
    cin>>nombre;
    cout<<"Digite el Tipo: ";
    cin>>tipo;
    cout<<"Digite la raza: ";
    cin>>raza;
    cout<<"Digite el peso: ";
    cin>>peso;
    cout<<"Digite la edad: ";
    cin>>edad;
    cout<<"Digite el tipo de sangre: ";
    cin>>tipoDeSangre;
    cout<<"Digite la identificaion: ";
    cin>>Nidentificacion;

    Mascotas[identificacion].setEdad(edad);
    Mascotas[identificacion].setNombre(nombre);
    Mascotas[identificacion].setIdentificacion(Nidentificacion);
    Mascotas[identificacion].setRaza(raza);
    Mascotas[identificacion].setTipo(tipo);
    Mascotas[identificacion].setPeso(peso);
    Mascotas[identificacion].setTipoSangre(tipoDeSangre);

}

void Administracion::EliminarP(int identificacion){
    Propietarios.erase(identificacion);
}

void Administracion::ListarP(Administracion administracion){
    int opcion;
    for(it = Propietarios.begin(); it != Propietarios.end(); it++ ){
        cout<< it ->first << ". "<<it -> second.getNombre();
    }
    cout<<"0. regresar";
    cout<<"Ingrese un valor...";
    cin>>opcion;
    if(opcion = 0){

    }else{
        Propietarios[opcion].ImprimitInformacionP(administracion);
    }
}

void Administracion::Listar2P(Administracion administracion){
    int opcion;
    for(it = Propietarios.begin(); it != Propietarios.end(); it++ ){
        cout<< it ->first << ". "<<it -> second.getNombre();
    }
}

void Administracion::AgregarP(int identificacion){
    string nombre;
    string email;
    int telefono;
    int documento;
    cout<<"Digite el Nombre: ";
    cin>>nombre;
    cout<<"Digite el Email: ";
    cin>>email;
    cout<<"Digite el Telefono: ";
    cin>>telefono;
    cout<<"Digite el Documento de Identidad: ";
    cin>>documento;
    Propietario propietario(nombre, email, telefono, documento);
    Propietarios.insert(make_pair(identificacion, propietario));
}

void Administracion::EditarP(int identificacion){
    string nombre;
    string email;
    int telefono;
    int documento;
    cout<<"Digite el Nombre: ";
    cin>>nombre;
    cout<<"Digite el Email: ";
    cin>>email;
    cout<<"Digite el Telefono: ";
    cin>>telefono;
    cout<<"Digite el Documento de Identidad: ";
    cin>>documento;
    Propietarios[identificacion].setNombre(nombre);
    Propietarios[identificacion].setEmail(email);
    Propietarios[identificacion].setTelefono(telefono);
    Propietarios[identificacion].setDocumentoDeIdentidad(documento);
}

void Administracion::EliminarM(int identificacion){
    Mascotas.erase(identificacion);

}

void Administracion::ListarM(Administracion administracion){
    int opcion;
    for(itm = Mascotas.begin(); itm != Mascotas.end(); itm++ ){
        cout<< itm ->first << ". "<<itm -> second.getNombre();
    }
    cout<<"0. regresar";
    cout<<"Ingrese un valor...";
    cin>>opcion;
    if(opcion = 0){

    }else{
        Mascotas[opcion].ImprimitInformacionM(administracion);
    }
}


void Administracion::Listar2M(Administracion administracion){
    int opcion;
    for(itm = Mascotas.begin(); itm != Mascotas.end(); itm++ ){
        cout<< itm ->first << ". "<<itm -> second.getNombre();
    }
}

Propietario Administracion::getPropietario(int identificaion){
    return this -> Propietarios.at(identificaion);
}

Mascota Administracion::getMascota(int identifiacion){
    return this -> Mascotas.at(identifiacion);
}
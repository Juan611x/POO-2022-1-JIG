
#include <iostream>
#include "Administracion.h"


void Administracion::Agregar(int identificacion){
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

void Administracion::Editar(int identificacion){
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

void Administracion::Eliminar(int identificacion){
    Propietarios.erase(identificacion);

}

void Administracion::Listar(){
    int opcion;
    for(it = Propietarios.begin(); it != Propietarios.end(); it++ ){
        cout<< it ->first << ". "<<it -> second.getNombre();
    }
    cout<<"0. regresar";
    cout<<"Ingrese un valor...";
    cin>>opcion;
    if(opcion = 0){

    }else{
        Propietarios[opcion].ImprimitInformacionP();
    }
}
#include <iostream>
#include "Administracion.h"



void Administracion::enlazarMascotaPropietarios(Mascota mascota, Propietario propietario){
    Enlace enlace(propietario, mascota);
    enlaces.push_back(enlace);
}

void Administracion::mostrarMascotas(Propietario propietario){
    cout<<"Mascotas:\n";
    for(int i = 0; i < enlaces.size(); i++){
        if(enlaces[i].getPropietario().getDocumentoDeIdentidad() == propietario.getDocumentoDeIdentidad()){
            cout<<enlaces[i].getMascota().getNombre();
        }
    }
}

void Administracion::mostrarPropietario(Mascota mascota){
    cout<<"Popietarios";
    for(int i = 0; i < enlaces.size(); i++){
        if(enlaces[i].getMascota().getIdentificacion() == mascota.getIdentificacion()){
            cout<<enlaces[i].getPropietario().getNombre();
        }
    }
}

void Administracion::AgregarMascota(int ident){
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
    mascotas.insert(make_pair(ident, mascota));
}

void Administracion::EditarMascota(int identificacion){
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

    mascotas[identificacion].setEdad(edad);
    mascotas[identificacion].setNombre(nombre);
    mascotas[identificacion].setIdentificacion(Nidentificacion);
    mascotas[identificacion].setRaza(raza);
    mascotas[identificacion].setTipo(tipo);
    mascotas[identificacion].setPeso(peso);
    mascotas[identificacion].setTipoSangre(tipoDeSangre);

}

void Administracion::EliminarPropietario(int identificacion){
    propietarios.erase(identificacion);
}

void Administracion::ListarPropietario(int ver){
    
    for(it = propietarios.begin(); it != propietarios.end(); it++ ){
        cout<< it ->first << ". "<<it -> second.getNombre();
    }
    if(ver == 1){
        int opcion;
        cout<<"0. regresar";
        cout<<"Ingrese un valor...";
        cin>>opcion;
        if(opcion != 0){
            propietarios.at(opcion).ImprimitInformacionP();
            mostrarMascotas(propietarios.at(opcion));
        }
    }

}

void Administracion::AgregarPropietario(int identificacion){
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
    propietarios.insert(make_pair(identificacion, propietario));
}

void Administracion::EditarPropietario(int identificacion){
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
    propietarios[identificacion].setNombre(nombre);
    propietarios[identificacion].setEmail(email);
    propietarios[identificacion].setTelefono(telefono);
    propietarios[identificacion].setDocumentoDeIdentidad(documento);
}

void Administracion::EliminarMascota(int identificacion){
    mascotas.erase(identificacion);

}

void Administracion::ListarMascota(int ver){
    int opcion;
    for(itm = mascotas.begin(); itm != mascotas.end(); itm++ ){
        cout<< itm ->first << ". "<<itm -> second.getNombre();
    }
    if(ver == 1){
        cout<<"0. regresar";
        cout<<"Ingrese un valor...";
        cin>>opcion;
        if(opcion = 0){
            mascotas.at(opcion).imprimitInformacionM();
            mostrarPropietario(mascotas.at(opcion));
        } 
    }
    
}

Propietario Administracion::getPropietario(int identificaion){
    return this -> propietarios.at(identificaion);
}

Mascota Administracion::getMascota(int identifiacion){
    return this -> mascotas.at(identifiacion);
}


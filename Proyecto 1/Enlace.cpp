#include <iostream>
#include "Enlace.h"

Enlace::Enlace(Propietario propietario, Mascota mascota){
    this -> propietario = propietario;
    this ->mascota = mascota;
    
}

Propietario Enlace::getPropietario(){
    return this -> propietario;
}

Mascota Enlace::getMascota(){
    return this -> mascota;
}


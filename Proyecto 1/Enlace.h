#ifndef ENLACE_H
#define ENLACE_H

#include <iostream>
#include "Propietario.h"
#include "Mascota.h"

class Enlace
{
    private:
        Propietario propietario;
        Mascota mascota;
    public:
        Enlace();
        Enlace(Propietario Propietario, Mascota mascota);
        Propietario getPropietario();
        Mascota getMascota();
        
};


#endif

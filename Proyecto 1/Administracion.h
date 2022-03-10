#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include <vector>
#include <map>
#include "Enlace.h"


using std::vector;
using std::string;
using std::map;

class Administracion{
    private:
        map<int, Propietario> propietarios;
        map<int, Propietario> :: iterator it;
        map<int, Mascota> mascotas;
        map<int, Mascota> :: iterator itm;
        vector<Enlace> enlaces;
    public:
        void AgregarPropietario(int identificacion);
        void EliminarPropietario(int identificacion);
        void EditarPropietario(int identificacion);
        void ListarPropietario(int ver);
        void AgregarMascota(int identificacion);
        void EliminarMascota(int identificacion);
        void EditarMascota(int identificacion);
        void ListarMascota(int ver);
        void mostrarMascotas(Propietario propietario);
        void mostrarPropietario(Mascota mascota);
        void enlazarMascotaPropietarios(Mascota mascota, Propietario propietario);
        Propietario getPropietario(int identificaion);
        Mascota getMascota(int identificaion);
};

#endif
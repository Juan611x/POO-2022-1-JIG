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
        map<int, Propietario> Propietarios;
        map<int, Propietario> :: iterator it;
        map<int, Mascota> Mascotas;
        map<int, Mascota> :: iterator itm;
        vector<Enlace> enlaces;
    public:
        void AgregarP(int identificacion);
        void EliminarP(int identificacion);
        void EditarP(int identificacion);
        void ListarP(int ver);
        void AgregarM(int identificacion);
        void EliminarM(int identificacion);
        void EditarM(int identificacion);
        void ListarM(int ver);

        void mostrarMascotas(Propietario propietario);
        void mostrarPropietario(Mascota mascota);

        void enlazarMascotaPropietarios(Mascota mascota, Propietario propietario);
        Propietario getPropietario(int identificaion);
        Mascota getMascota(int identificaion);
};

#endif
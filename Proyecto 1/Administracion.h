#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include<iostream>
#include"Mascota.h"
#include"Propietario.h"
#include<list>
#include<map>


using std::string;
using std::list;
using std::map;

class Administracion{
    private:
        int identificacionM = 0;
        int identificacionP = 0;

        map<int,Propietario> Propietarios;
        map<int, Propietario> :: iterator it;

        map<int, Mascota> Mascotas;
        map<int, Mascota> :: iterator itm;
    public:
        void AgregarP(int identificacion);
        void EliminarP(int identificacion);
        void EditarP(int identificacion);
        void ListarP(Administracion administracion);
        void AgregarM(int identificacion);
        void EliminarM(int identificacion);
        void EditarM(int identificacion);
        void ListarM(Administracion administracion);

        void Listar2P(Administracion administracion);
        void Listar2M(Administracion administracion);
        Propietario getPropietario(int identificaion);
        Mascota getMascota(int identificaion);

};

#endif
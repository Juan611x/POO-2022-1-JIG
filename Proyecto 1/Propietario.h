#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include<iostream>
#include<vector>
#include"Mascota.h"
#include"Administracion.h"
using namespace std;


class Propietario{
    private:
        string Nombre;
        string Email;
        int Telefono;
        int documentoDeIdentidad;
        vector<Mascota> vMascotas;

    public:
        void ImprimitInformacionP(Administracion administracion);
        void setNombre(string Nombre);
        string getNombre();
        void setEmail(string Email);
        string getEmail();
        void setTelefono(int Telefono);
        int getTelefono();
        void setDocumentoDeIdentidad(int DocumentoDeIdentidad);
        int getDocumentoDeIdentidad();
        void agregarMascota(Mascota mascota);
        Propietario(string Nombre, string Email, int Telefono, int Documento);
};

#endif
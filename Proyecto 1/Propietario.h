#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <vector>

using namespace std;


class Propietario{
    private:
        string nombre;
        string email;
        int telefono;
        int documentoDeIdentidad;

    public:
        Propietario(string Nombre, string Email, int Telefono, int Documento);
        Propietario();
        void ImprimitInformacionP();
        void setNombre(string Nombre);
        string getNombre();
        void setEmail(string Email);
        string getEmail();
        void setTelefono(int Telefono);
        int getTelefono();
        void setDocumentoDeIdentidad(int DocumentoDeIdentidad);
        int getDocumentoDeIdentidad();
        
};

#endif
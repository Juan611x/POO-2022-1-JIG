#include<iostream>
#include<vector>
#include"Mascota.h"

using namespace std;


class Propietario{
    private:
        string Nombre;
        string Email;
        int Telefono;
        int DocumentoDeIdentidad;
        vector<Mascota> vMascotas;

    public:
        void ImprimitInformacionP();
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


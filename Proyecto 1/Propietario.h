#include<iostream>

using std::string;

class Propietario{
    private:
        string Nombre;
        string Email;
        int Telefono;
        int DocumentoDeIdentidad;
    public:
        void setNombre();
        string getNombre();
        void setEmail();
        string getEmail();
        void setTelefono();
        int getTelefono();
        void setDocumentoDeIdentidad();
        int getDocumentoDeIdentidad();
        Propietario(string Nombre, string Email, int Telefono, int Documento);
};


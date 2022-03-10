#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include <vector>



using namespace std;

class Mascota{
    private:
        bool Estatus;
        string FechaDefuncion;
        int Identificacion;
        string Nobre;
        string TipoDeSangre;
        int Edad;
        float Peso;
        string Tipo;
        string Raza;
    public:
        void ImprimitInformacionM();
        Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus);
        Mascota();
        bool getEstatus();
        string getFechaDefuncion();
        int getIdentificacion();
        string getNombre();
        string getTipoDeSangre();
        int getEdad();
        float getPeso();
        string getTipo();
        string getRaza();
        void setNombre(string nombre);
        void setTipo(string tipo);
        void setRaza(string raza);
        void setPeso(float peso);
        void setEdad(int edad);
        void setTipoSangre(string tipoSangre);
        void setIdentificacion(int identificacion);
        void setStatus(bool status);
        void setFechaDefuncion(string fecha);

};

#endif
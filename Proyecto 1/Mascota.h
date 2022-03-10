#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include <vector>



using namespace std;

class Mascota{
    private:
        bool estatus;
        string fechaDefuncion;
        int identificacion;
        string nobre;
        string tipoDeSangre;
        int edad;
        float peso;
        string tipo;
        string raza;
    public:
        Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus);
        Mascota();
        void imprimitInformacionM();
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
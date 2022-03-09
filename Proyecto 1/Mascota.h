#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
#include<vector>

#include"Propietario.h"

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
        vector<Propietario> duenos;
    public:
        void ImprimitInformacionM(Administracion administracion);
        Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus);
        Mascota(string Tipo, string Raza, float Peso, int Eedad, string TipoDeSangre, string Nombre, int Identificacion, bool Estatus, string FechaDefuncion);
        bool getEstatus();
        string getFechaDefuncion();
        int getIdentificacion();
        string getNombre();
        string getTipoDeSangre();
        int getEdad();
        float getPeso();
        string getTipo();
        string getRaza();
        void agregarDueno(Propietario dueno);

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
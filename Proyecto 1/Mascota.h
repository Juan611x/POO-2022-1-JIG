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
        int TipoDeSangre;
        int Edad;
        float Peso;
        int Tipo;
        string Raza;
        vector<Propietario> dueños;
    public:
        void ImprimitInformacionM();
        Mascota(int Tipo, string Raza, float Peso, int Eedad, int TipoDeSangre, string Nombre, int Identificacion, bool Estatus);
        Mascota(int Tipo, string Raza, float Peso, int Eedad, int TipoDeSangre, string Nombre, int Identificacion, bool Estatus, string FechaDefuncion);
        bool getEstatus();
        string getFechaDefuncion();
        int getIdentificacion();
        string getNombre();
        int getTipoDeSangre();
        int getEdad();
        float getPeso();
        int getTipo();
        string getRaza();
        void agregarDueño(Propietario dueño);

};
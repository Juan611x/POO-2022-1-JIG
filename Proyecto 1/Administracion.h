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
    public:
        void Agregar(int identificacion);
        void Eliminar(int identificacion);
        void Editar(int identificacion);
        void Listar();

};
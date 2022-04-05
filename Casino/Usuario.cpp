//
// Created by Juan on 5/04/2022.
//

#include "Usuario.h"
#include <iostream>

Usuario::Usuario(const string &nombre_, const int &id_, const double &saldo_)
:nombre(nombre_), id(id_), saldo(saldo_)
{
}

void Usuario::setNombre(string nombre_){
    nombre = nombre_;
}
string Usuario::getNombre() const {
    return nombre;
}

void Usuario::setId(int id_) {
    id = id_;
}
int Usuario::getId() const {
    return id;
}

void Usuario::setSaldo(double saldo_) {
    saldo = saldo_;
}
double Usuario::getSaldo() const {
    return saldo;
}
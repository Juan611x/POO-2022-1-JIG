//
// Created by Juan on 5/04/2022.
//

#ifndef CASINO_USUARIO_H
#define CASINO_USUARIO_H

#include<iostream>

using std::cin;
using std::cout;
using std::string;

class Usuario {
private:
    string nombre;
    int id;
    double saldo;
public:
    Usuario(const string &, const int &, const double &);

    void setNombre(string);
    string getNombre()const;

    void setId(int);
    int getId()const;

    void setSaldo(double);
    double getSaldo()const;

};


#endif //CASINO_USUARIO_H

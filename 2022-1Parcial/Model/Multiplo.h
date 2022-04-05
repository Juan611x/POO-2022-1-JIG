//
// Created by Juan on 5/04/2022.
//

#ifndef CASINO_POLIMORFISMO_MULTIPLO_H
#define CASINO_POLIMORFISMO_MULTIPLO_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class Multiplo: public Juego{
protected:
    float calcularResultado(float gonzosApostar) override;
public:
    ~Multiplo() override = default;
    float jugar(float gonzosApostar) override;
    virtual void mostrarReglas();
};


#endif //CASINO_POLIMORFISMO_MULTIPLO_H

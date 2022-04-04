//
// Created by Juan on 3/04/2022.
//

#ifndef EMPLEADOS_BASEPLUSCOMMISSIONEMPLOYEE_H
#define EMPLEADOS_BASEPLUSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee: public CommissionEmployee{
public:
    BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);

    void setBaseSalary(double);
    double getBaseSalary()const;

    virtual double earnings() const ;
    virtual void  print() const;
private:
    double baseSalary;
};


#endif //EMPLEADOS_BASEPLUSCOMMISSIONEMPLOYEE_H

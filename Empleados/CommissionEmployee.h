//
// Created by Juan on 3/04/2022.
//

#ifndef EMPLEADOS_COMMISSIONEMPLOYEE_H
#define EMPLEADOS_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee: public Employee{
private:
    double grossSale;
    double commissionRate;
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setCommissionRate(double);
    double getCommissionRate()const;

    void setGrossSale(double);
    double getGrossSale()const;

    virtual double earnings() const ;
    virtual void  print() const;
};


#endif //EMPLEADOS_COMMISSIONEMPLOYEE_H

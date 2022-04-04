//
// Created by Juan on 3/04/2022.
//

#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double sale, double rate, double salary)
: CommissionEmployee(first, last, ssn, sale, rate) {
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = (salary < 0.0)? 0.0:salary;
}
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print() const {
    cout<<"Base Plus Commission Employee: ";
    CommissionEmployee::print();
    cout<<"\nSalary: "<<getBaseSalary();
}
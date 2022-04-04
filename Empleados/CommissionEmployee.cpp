//
// Created by Juan on 3/04/2022.
//

#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sale, double rate)
: Employee(first, last, ssn) {
    setCommissionRate(rate);
    setGrossSale(sale);
}

void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = ((rate < 0.0)&&(rate > 1.0)? rate:0.0);
}
double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

void CommissionEmployee::setGrossSale(double sale) {
    grossSale = (sale < 0.0)? 0.0:sale;
}
double CommissionEmployee::getGrossSale() const {
    return grossSale;
}

double CommissionEmployee::earnings() const {
    return getCommissionRate() * getGrossSale();
}
void CommissionEmployee::print() const {
    cout<<"Commission Employee: ";
    Employee::print();
    cout<<"\nGross Sale: "<<getGrossSale()<<"\nCommission Rate: "<<getCommissionRate();
}
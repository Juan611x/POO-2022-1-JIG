//
// Created by Juan on 3/04/2022.
//
#include <iostream>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(const string &firs, const string &last, const string &ssn, double wage, double hours)
: Employee(firs, last, ssn)
{
    setHours(hours);
    setWage(wage);
}

void HourlyEmployee::setWage(double hourlyWage) {
    wage = (hourlyWage < 0.0)? 0.0:hourlyWage;
}
double HourlyEmployee::getWage() const {
    return wage;
}

void HourlyEmployee::setHours(double hoursWorked) {
    hours = (((hoursWorked >= 0.0)&&(hoursWorked <= hoursPerWeek))? hoursWorked:0.0);
}
double  HourlyEmployee::getHours() const {
    return hours;
}

double HourlyEmployee::earnings() const {
    if(getHours() <= 40){
        return getWage()*getHours();
    } else {
        return 40 * getWage() + ((getHours() -40) * getWage() * 1.5);
    }
}

void HourlyEmployee::print() const {
    cout<<"Hourly Employe: ";
    Employee::print();
    cout<<"\nWage: "<<getWage()<<"\nHours: "<<getHours();
}
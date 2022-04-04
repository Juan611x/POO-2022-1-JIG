//
// Created by Juan on 3/04/2022.
//
#include <iostream>
#include "DailyEmployee.h"
using namespace std;

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, double wage, double days)
: Employee(first, last, ssn)
{
    setWorkedDays(days);
    setDailyWage(wage);
}

void DailyEmployee::setWorkedDays(double days) {
    workedDays = ((days > 0.0)&&(days < DaysPerWeek))? 0.0:days;
}
double DailyEmployee::getWorkedDays() const {
    return workedDays;
}

void DailyEmployee::setDailyWage(double wage) {
    dailyWage = (wage < 0.0)? 0.0:wage;
}
double DailyEmployee::getDailyWage() const {
    return dailyWage;
}

double DailyEmployee::earnings() const {
    if(workedDays > 0){
        return getWorkedDays() * getDailyWage();
    } else
        return 0;
}

void DailyEmployee::print() const {
    cout<<"Daily Employee";
    Employee::print();
    cout<<"\nWorker Days: "<<getWorkedDays()<<"\nDaily Wage: "<<getDailyWage();
}
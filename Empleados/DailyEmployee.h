//
// Created by Juan on 3/04/2022.
//

#ifndef EMPLEADOS_DAILYEMPLOYEE_H
#define EMPLEADOS_DAILYEMPLOYEE_H

#include "Employee.h"

class DailyEmployee : public Employee {
public:
    double dailyWage;
    double workedDays;

private:
    static const int DaysPerWeek = 5;
    DailyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setDailyWage(double);
    double getDailyWage()const;

    void setWorkedDays(double);
    double getWorkedDays()const;

    virtual double earnings() const ;
    virtual void  print() const;
};


#endif //EMPLEADOS_DAILYEMPLOYEE_H

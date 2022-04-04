//
// Created by Juan on 3/04/2022.
//

#ifndef EMPLEADOS_EMPLOYEE_H
#define EMPLEADOS_EMPLOYEE_H

#include<string>
using namespace std;

class Employee {
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;

public:
    Employee(const string &, const string &, const string &);

    void setFirstName(const string&);
    string getFirstName() const;

    void setLastName(const string&);
    string getLastName() const;

    void  setSocialSecurityNumber(const string&);
    string getSocialSecurityNumber() const;

    virtual double earnings() const = 0;
    virtual void  print() const;
};

#endif //EMPLEADOS_EMPLOYEE_H

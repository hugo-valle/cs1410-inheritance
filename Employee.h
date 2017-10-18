// File: Employee
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
private:
	string name;			// Employee Name
	unsigned long number;	// Employee ID
public:
	void setData();
	void getData();

};


#endif //INHERITANCE_EMPLOYEE_H

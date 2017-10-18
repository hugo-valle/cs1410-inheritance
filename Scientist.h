// File: Scientist
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#ifndef INHERITANCE_SCIENTIST_H
#define INHERITANCE_SCIENTIST_H


#include "Employee.h"

class Scientist : public Employee
{
private:
	int pubs;		// publications
public:
	void setData();
	void getData();

};


#endif //INHERITANCE_SCIENTIST_H

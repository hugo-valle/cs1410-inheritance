// File: Manager
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H


#include "Employee.h"
#include "Student.h"

class Manager : private Employee, private Student
{
private:
	string title;		// "president" etc
	double dues;		//  golf club dues
public:
	void setData();
	void getData();
};


#endif //INHERITANCE_MANAGER_H

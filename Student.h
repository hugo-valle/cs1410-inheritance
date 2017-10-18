// File: Student
// Created by Hugo Valle on 10/18/2017.
// Copyright (c) 2017 WSU
//

#ifndef INHERITANCE_STUDENT_H
#define INHERITANCE_STUDENT_H
#include <iostream>
using namespace std;

class Student	// Educational Background
{
private:
	string school;
	string degree;
public:
	void setEducation();
	void getEducation();
};


#endif //INHERITANCE_STUDENT_H

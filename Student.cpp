// File: Student
// Created by Hugo Valle on 10/18/2017.
// Copyright (c) 2017 WSU
//

#include "Student.h"

void Student::setEducation()
{
	cout<<"\nEnter name of school or univeristy: ";
	cin>>school;
	cin.ignore();
	cout<<"\nEnter highest degree earned\n";
	cout<<"  (High School, BS, Master, Ph.D)";
	cin>>degree;
	cin.ignore();

}

void Student::getEducation()
{
	cout<<"\nSchool or University: "<< school;
	cout<<"\nHighest degree earned: "<< degree;
}

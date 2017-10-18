// File: Employee
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#include "Employee.h"

void Employee::setData()
{
	cout <<"\n Enter last name: ";
	cin >> name;
	cin.ignore();
	cout<<"\nEnter ID Number: ";
	cin >>number;
}

void Employee::getData()
{
	cout<<"\n Name: "<<name;
	cout<<"\n IdNumber: "<<number;
}

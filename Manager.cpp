// File: Manager
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#include "Manager.h"

void Manager::setData()
{
	Employee::setData();
	cout<<"\nEnter your title: ";
	cin >> title;
	cin.ignore();
	cout<<"\nEnter golf club dues: ";
	cin >> dues;
}

void Manager::getData()
{
	Employee::getData();
	cout<<"\n Title: "<< title;
	cout<<"\n Golf Dues: "<< dues;
}

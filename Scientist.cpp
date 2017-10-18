// File: Scientist
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#include "Scientist.h"

void Scientist::setData()
{
	Employee::setData();
	cout<<"\nEnter the number of pubs: ";
	cin >> pubs;
}

void Scientist::getData()
{
	Employee::getData();
	cout<<"\nNumber of publications: "<< pubs<<endl;
}

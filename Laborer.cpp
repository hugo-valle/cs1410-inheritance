// File: Laborer
// Created by Hugo Valle on 10/17/2017.
// Copyright (c) 2017 WSU
//

#include "Laborer.h"

void Foreman::setData()
{
	Laborer::setData();
	cout<<"\nEnter Quotas: ";
	cin >> quotas;
}

void Foreman::getData()
{
	Laborer::getData();
	cout<<"\n Quotas: "<<quotas;
}

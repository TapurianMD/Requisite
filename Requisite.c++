/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>
#include "Requisite.h"

#ifndef __REQUISITE_CPP__
#define __REQUISITE_CPP__

using namespace std;

Requisites::Requisites(string name, short requisiteNumber, Requisite myRawData[3])
{
	allAcquired = false;

	Requisites::Name = name;

	// Number of requisites
	Requisites::RequisiteNumber = requisiteNumber;

	int i;

	for (i = 0; i < Requisites::RequisiteNumber; i++)
	{
		Requisites::RawData[i] = myRawData[i];
	}
}

void Requisites::Print()
{
	cout << "\t" << Requisites::Name << " requisites" << endl << endl;

	int i;

	for (i = 0; i < Requisites::RequisiteNumber; i++)
	{
		cout << "\t\t" << 1 + i << ". " << RawData[i].name << "\n\t\t\tStatus: " << (RawData[i].acquired == 1? "DONE" : "TODO") << endl;
	}

	cout << endl << endl;
}

#endif


/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>

#ifndef __REQUISITE_H__
#define __REQUISITE_H__

using namespace std;

typedef struct
{
	string name;
	bool acquired;
} Requisite;

class Requisites
{
public:
	string Name;
	bool allAcquired;
	short RequisiteNumber;
	Requisites(string name, short requisiteNumber, Requisite myRawData[]);
	void Print();

private:
	Requisite RawData[100];
};

#endif


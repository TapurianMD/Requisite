/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

typedef struct
{
	string name;
	bool acquired;
} Requisite;

class Requisites
{
public:
	string name;
	bool allAcquired;
	short RequisiteNumber;
	Requisites();
	void Print();

private:
	Requisite RawData[100];
};

Requisites::Requisites()
{
	allAcquired = false;

	// For buildings
	Requisite myRawData[] = {{"Building permit", false}, {"Finance", false}, {"Builder", false}};

	// Number of requisites
	Requisites::RequisiteNumber = sizeof(myRawData) / sizeof(Requisite);

	cout << RequisiteNumber << endl << endl;

	int i;

	for (i = 0; i < Requisites::RequisiteNumber; i++)
	{
		RawData[i] = myRawData[i];
	}
}

void Requisites::Print()
{
	int i;

	for (i = 0; i < Requisites::RequisiteNumber; i++)
	{
		cout << 1 + i << ". " << RawData[i].name << "\n\tStatus: " << RawData[i].acquired << endl;
	}
}

int main(int argc, char** argv)
{
	cout << "Requisite" << endl << endl;

	Requisites myRequisites;

	myRequisites.Print();

	return 0;
}


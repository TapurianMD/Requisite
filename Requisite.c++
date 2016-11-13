/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>

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
	Requisites(string name, short requisiteNumber, Requisite myRawData[3]);
	void Print();

private:
	Requisite RawData[100];
};

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
		cout << "\t\t" << 1 + i << ". " << RawData[i].name << "\n\t\t\tStatus: " << RawData[i].acquired << endl;
	}
}

int main(int argc, char** argv)
{
	cout << "Requisite" << endl << endl;

	// For buildings
	Requisite myRawData[] = {{"Building permit", false}, {"Finance", false}, {"Builder", false}};

	Requisites myRequisites("Building", 3, myRawData);

	myRequisites.Print();

	return 0;
}


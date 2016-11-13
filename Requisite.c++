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
	string name;
	bool allAcquired;
	short RequisiteNumber;
	Requisites(short requisiteNumber, Requisite myRawData[3]);
	void Print();

private:
	Requisite RawData[100];
};

Requisites::Requisites(short requisiteNumber, Requisite myRawData[3])
{
	allAcquired = false;

	// Number of requisites
	Requisites::RequisiteNumber = requisiteNumber;

	cout << RequisiteNumber << endl << endl;

	int i;

	for (i = 0; i < Requisites::RequisiteNumber; i++)
	{
		Requisites::RawData[i] = myRawData[i];
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

	// For buildings
	Requisite myRawData[] = {{"Building permit", false}, {"Finance", false}, {"Builder", false}};

	Requisites myRequisites(3, myRawData);

	myRequisites.Print();

	return 0;
}


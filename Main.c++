/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include "Requisite.h"

using namespace std;

int main(int argc, char** argv)
{
	cout << "Requisite" << endl << endl;

	// For buildings
	Requisite buildingRequisites[] = {{"Architecture", false}, {"Building permit", false}, {"Finance", false}, {"Builder", false}};

	Requisites myBuildingRequisites("Building", 4, buildingRequisites);

	myBuildingRequisites.Print();

	// For vacation
	Requisite vacationRequisites[] = {{"Destination research", false}, {"Air ticket", false}, {"Hotel reservation", false}};

	Requisites myVacationRequisites("Vacation", 3, vacationRequisites);

	myVacationRequisites.Print();

	// For Computer Procurement
	Requisite computerProcurementRequisites[] = {{"Consults with peers", false}, {"Find best price", false}};

	Requisites mycomputerProcurementRequisites("Vacation", 2, computerProcurementRequisites);

	mycomputerProcurementRequisites.Print();

	return 0;
}


/* Copyright آ© 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>

using namespace std;

typedef struct
{
    string name;
    bool acquired;
} Requisite;

int main(int argc, char** argv)
{
    cout << "Requisite" << endl << endl;

    // For buildings
    Requisite buildingRequisites[] = {{"Building permit", false}, {"Finance", false}, {"Builder", false}};

    // Number of requisites
    short buildingRequisiteNumber = sizeof(buildingRequisites) / sizeof(Requisite);

    int i;

    for (i = 0; i < buildingRequisiteNumber; i++)
    {
        cout << 1 + i << ". " << buildingRequisites[i].name << "\n\tStatus: " << buildingRequisites[i].acquired << endl;
    }

    return 0;
}

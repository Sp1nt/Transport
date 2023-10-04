#include "Car.h"
#include "Transport.h"

void Car::Input()
{
	Transport::Input();
	cout << "Input number of doors: ";
	cin >> numberOfDoors;
}

void Car::Print()
{
	Transport::Print();
	cout << "Number Of Doors: " << numberOfDoors << endl;
}


int Car::GetNumbOfDoors() const
{
	return numberOfDoors;
}

void Car::SetNumbOfDoors(int nod)
{
	numberOfDoors = nod;
}

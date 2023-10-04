#pragma once
#include "Transport.h"

class Car : public Transport
{
	int numberOfDoors;

public:
	void Input();
	void Print();


	int GetNumbOfDoors() const;


	void SetNumbOfDoors(int);
};


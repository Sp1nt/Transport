#pragma once
#include "Transport.h"
class Tram : public Transport
{
	int numberOfWagons;

public:
	void Input();
	void Print();


	int GetNumberOfWagons() const;


	void SetNumberOfWagons(int);
};


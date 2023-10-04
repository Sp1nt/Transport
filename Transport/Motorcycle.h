#pragma once
#include "Transport.h"
class Motorcycle : public Transport
{
	float engineCapacityCC;
public:
	void Input();
	void Print();


	float GetEngineCapacity() const;



	void SetEngineCapacity(float);
};


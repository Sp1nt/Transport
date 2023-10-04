#pragma once
#include "Transport.h"
class Airplane : public Transport
{
	int numberOfEngines;
public:
	void Input();
	void Print();


	int GetNumberOfEngines() const;


	void SetNumberOfEngines(int);
};


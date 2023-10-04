#pragma once
#include "Transport.h"
class Ship : public Transport
{
	int numberOfDecks;
public:
	void Input();
	void Print();


	int GetNumberOfDecks() const;

	void SetNumberOfDecks(int);
};


#include "Airplane.h"
#include "Transport.h"

void Airplane::Input()
{
	Transport::Input();
	cout << "Input Number Of Engines: ";
	cin >> numberOfEngines;
}

void Airplane::Print()
{
	Transport::Print();

	cout << "Number Of Engines: " << numberOfEngines << endl;
}

int Airplane::GetNumberOfEngines() const
{
	return numberOfEngines;
}

void Airplane::SetNumberOfEngines(int noe)
{
	numberOfEngines = noe;
}

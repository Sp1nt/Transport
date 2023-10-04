#include "Tram.h"
#include "Transport.h"

void Tram::Input()
{
	Transport::Input();

	cout << "Input number Of Wagons: ";
	cin >> numberOfWagons;
}

void Tram::Print()
{
	Transport::Print();

	cout << "Number Of Wagons: " << numberOfWagons << endl;
}

int Tram::GetNumberOfWagons() const
{
	return numberOfWagons;
}

void Tram::SetNumberOfWagons(int now)
{
	numberOfWagons = now;
}

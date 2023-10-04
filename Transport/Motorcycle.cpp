#include "Motorcycle.h"
#include "Transport.h"

void Motorcycle::Input()
{
	Transport::Input();

	cout << "Input engine capacity CC: ";
	cin >> engineCapacityCC;
}

void Motorcycle::Print()
{
	Transport::Print();
	cout << "Engine capacityCC: " << engineCapacityCC << endl;
}

float Motorcycle::GetEngineCapacity() const
{
	return engineCapacityCC;
}

void Motorcycle::SetEngineCapacity(float e3c)
{
	engineCapacityCC = e3c;
}

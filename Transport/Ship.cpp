#include "Ship.h"
#include "Transport.h"

void Ship::Input()
{
	Transport::Input();

	cout << "Input the number of Decks: ";
	cin >> numberOfDecks;
}

void Ship::Print()
{
	Transport::Print();

	cout << "Number of Decks: " << numberOfDecks << endl;
}

int Ship::GetNumberOfDecks() const
{
	return numberOfDecks;
}

void Ship::SetNumberOfDecks(int nod)
{
	numberOfDecks = nod;
}

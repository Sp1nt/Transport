#include "Transport.h"
#include <iostream>
#include <string>
using namespace std;

Transport::Transport(string br, string md, string ft, string col, int nop, float sp)
{
	brand = br;
	model = md;
	fuelT = ft;
	color = col;
	speed = sp;
	numbOFPass = nop;
}

void Transport::Input()
{
	cout << "Input brand: ";
	cin >> brand;

	cout << "Input model: ";
	cin >> model;

	cout << "Input color: ";
	cin >> color;

	cout << "Input fuel type: ";
	cin >> fuelT;

	cout << "Input maximum speed: ";
	cin >> speed;

	cout << "Input number of passengers: ";
	cin >> numbOFPass;
}

void Transport::Print()
{
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "Fuel type: " << fuelT << endl;
	cout << "Maximum speed: " << speed << endl;
	cout << "Number of passengers: " << numbOFPass << endl;
}

string Transport::GetBrand() const
{
	return brand;
}

string Transport::GetModel() const
{
	return model;
}

string Transport::GetColor() const
{
	return color;
}

string Transport::GetFuelType() const
{
	return fuelT;
}

float Transport::GetMaxSpeed() const
{
	return speed;
}

int Transport::GetNumbOFPass() const
{
	return numbOFPass;
}

void Transport::SetBrand(string b)
{
	brand = b;
}

void Transport::SetModel(string m)
{
	model = m;
}

void Transport::SetColor(string c)
{
	color = c;
}

void Transport::SetFuelType(string ft)
{
	fuelT = ft;
}

void Transport::SetSpeed(float s)
{
	speed = s;
}

void Transport::SetNumbOFPass(int nop)
{
	numbOFPass = nop;
}

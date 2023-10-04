#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transport
{
protected:
	string brand;
	string model;
	string fuelT;
	string color;
	int numbOFPass;
	float speed;
public:
	Transport() = default;
	Transport(string, string, string, string, int, float);
	virtual void Input();
	virtual void Print();

	string GetBrand() const;
	string GetModel() const;
	string GetColor() const;
	string GetFuelType() const;

	float GetMaxSpeed() const;
	int GetNumbOFPass() const;


	void SetBrand(string);
	void SetModel(string);
	void SetColor(string);
	void SetFuelType(string);

	void SetSpeed(float);
	void SetNumbOFPass(int);
};


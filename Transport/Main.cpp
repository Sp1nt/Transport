#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "Airplane.h"
#include "Tram.h"
#include "Motorcycle.h"

using namespace std;

int main()
{

	int ch = 0;
	Transport* ptr = nullptr;

    cout << "Menu: " << endl;
    cout << "1. Car" << endl;
    cout << "2. Ship" << endl;
    cout << "3. Airplane" << endl;
    cout << "4. Tram" << endl;
    cout << "5. Motorcycle" << endl;
    cout << ": ";

    cin >> ch;

    switch (ch) {
    case 1:
        ptr = new Car();
        break;
    case 2:
        ptr = new Ship();
        break;
    case 3:
        ptr = new Airplane();
        break;
    case 4:
        ptr = new Tram();
        break;
    case 5:
        ptr = new Motorcycle();
        break;
    default:
        cout << "Wrong Input!" << endl;
    }

    ptr->Input();
    cout << endl;

    ptr->Print();

    return 0;
}
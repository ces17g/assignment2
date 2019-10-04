// Created by Chris Santos on 10/3/19.

#include "Skateboard.h"

Skateboard::Bicycle(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Bicycle() = default;

double Skateboard::mileageEstimate(double time) {
    srand( time(0) );
    double mileage = 0.1 * (rand()%5 + 1) * time;
    if ((time > 25) && (time < 250)){
	srand( time(0) );
        mileage += time / (rand()%3 + 1);
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}

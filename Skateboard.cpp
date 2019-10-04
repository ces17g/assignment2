// Created by Chris Santos on 10/3/19.

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double min) {
    srand( time(0) );
    double mileage = 0.1 * (rand()%5 + 1) * min;
    if ((min > 25) && (min < 250)){
        srand( time(0) );
        mileage += min / (rand()%3 + 1);
    }
    return mileage;
}

string Skateboard::toString() {
    return "-> Skateboard\n" + Vehicle::toString();
}

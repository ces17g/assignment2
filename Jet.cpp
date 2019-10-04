// Created by Chris Santos on 10/3/19.

#include "Jet.h"

Jet::Jet() {
    numberOfEngines=1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int engineCount) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(engineCount);
}

Jet::~Jet() = default;

int Jet::getEngineCount() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engineCount) {
    if (engineCount > 0) { numberOfEngines=engineCount; }
}

double Jet::mileageEstimate(double min) {
    srand(time(0));
    double mileage = (rand()%60 + 40) * min;
    if ((numberOfEngines > 2) && (fuelType == "Rocket")) {
        mileage *= 1.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getEngineCount());
}

// Created by Chris Santos on 10/4/19.

#include "Speedboat.h"

Speedboat::Speedboat() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Speedboat::Speedboat(string brand, string model, string fuelType, string engineSize, int engineCount) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
    setNumberOfEngines(engineCount);
}

Speedboat::~Speedboat() = default;

int Speedboat::getEngineCount() {
    return numberOfEngines;
}

void Speedboat::setNumberOfEngines(int engineCount) {
    if ( (engineCount > 0) && (engineCount < 6) ) { numberOfEngines=engineCount; }
}

string Speedboat::getEngineSize() {
    return myEngineSize;
}

void Speedboat::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Speedboat::mileageEstimate(double min) {
    srand( time(0) );
    double mileage = (rand()%10 + 5) * min;
    if (numberOfEngines > 2)
        mileage *= 1.055;
    if (fuelType == "electricity")
	mileage *= 1.005;
    return mileage;
}

string Speedboat::toString() {
    return "-> Speedboat\n" + PoweredVehicle::toString() + "\n\tEngine Count: " +
           to_string(getEngineCount()) + "\n\tEngine Size: " + getEngineSize();
}

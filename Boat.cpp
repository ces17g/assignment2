//
// Created by Esteban Parra on 9/5/19.
//

#include "Boat.h"

Boat::Boat() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Boat::Boat(string brand, string model, string fuelType, string engineSize, int engineCount=1) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Boat::~Boat() = default;

int Jet::getEngineCount() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engineCount) {
    if ( (engineCount > 0) && (engineCount < 6) ) { numberOfEngines=engineCount; }
}

string Boat::getEngineSize() {
    return myEngineSize;
}

void Boat::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Boat::mileageEstimate(double time) {
    srand( time(0) );
    double mileage = (rand()%10 + 5) * time;
    if (engineCount > 2)
        mileage *= 1.055;
    if (engineSize == "grande")
        mileage *= 1.055;
    if (fuelType == "electricity")
        mileage += mileage * 0.05;
    return mileage;
}

string Boat::toString() {
    return "-> Boat\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}

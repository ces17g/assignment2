// Created by Chris Santos on 10/4/19.

#include <cstdlib>
#include <ctime>
#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle {

private:
    string myEngineSize;
    int numberOfEngines;

public:
    Boat();

    explicit Boat(string brand, string model, string fuelType, string engineSize, int engineCount);

    virtual ~Boat();
    int getEngineCount();
    void setNumberOfEngines(int engineSize);
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BOAT_H

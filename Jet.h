// Created by Chris Santos on 10/3/19.

#include <cstdlib>
#include <ctime>
#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();
    explicit Jet(string brand, string model, string fuelType, int engineCount=1);
    virtual ~Jet();
    int getEngineCount();
    void setNumberOfEngines(int engineCount);
    virtual double mileageEstimate(double min);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H

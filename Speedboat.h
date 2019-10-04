// Created by Chris Santos on 10/4/19.

#include <cstdlib>
#include <ctime>
#ifndef DRIVINGSIMULATOR_SPEEDBOAT_H
#define DRIVINGSIMULATOR_SPEEDBOAT_H

#include "PoweredVehicle.h"

class Speedboat : public PoweredVehicle {

private:
    string myEngineSize;
    int numberOfEngines;

public:
    Speedboat();

    explicit Speedboat(string brand, string model, string fuelType, 
        string engineSize, int engineCount=1);

    virtual ~Speedboat();
    int getEngineCount();
    void setNumberOfEngines(int engineSize);
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double min);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SPEEDBOAT_H

#include "RentBicycleCollection.h"

vector<Bicycle*> RentBicycleCollection::rentBicycleList;

void RentBicycleCollection::addRentBicycle(Bicycle* bicycle)
{
    rentBicycleList.push_back(bicycle);
}

const vector<Bicycle*> RentBicycleCollection::getRentBicycles()
{
    return rentBicycleList;
}
#include "RentBicycle.h"

// 자전거 대여
Bicycle* RentBicycle::rentBicycle(string id)
{
    Bicycle* rentResult = BicycleCollection::findBicycle(id);   // 대여하려는 자전거 찾기
    if (rentResult != nullptr) {    // 대여하려는 자전거가 존재하는 자전거라면 대여
        RentBicycleCollection::addRentBicycle(rentResult);
    }
    return rentResult;
}

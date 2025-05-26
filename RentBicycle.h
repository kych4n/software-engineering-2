#pragma once

#include "RentBicycleCollection.h"
#include "BicycleCollection.h"

// 자전거 대여 control 클래스
class RentBicycle {
public:
	static Bicycle* rentBicycle(string id);
};


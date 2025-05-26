#pragma once

#include <string>
#include "BicycleCollection.h"
using namespace std;

// 자전거 등록 control 클래스
class RegisterBicycle {
public:
	static void createNewBicycle(string id, string productName);
};
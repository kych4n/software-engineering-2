#pragma once

#include "RentBicycleCollection.h"
using namespace std;

// 자전거 대여 정보를 조회하는 control 클래스
class LoadRentBicycleInfo
{
public:
	static vector<Bicycle*> loadRentBicycles();	// 대여 중인 모든 자전거 조회
};


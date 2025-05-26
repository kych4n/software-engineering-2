#pragma once

#include <vector>
#include "Bicycle.h"
using namespace std;

// 대여한 자전거들을 저장하는 entity 클래스
class RentBicycleCollection
{
private:
	static vector<Bicycle*> rentBicycleList;
public:
	static void addRentBicycle(Bicycle* bicycle);	// 대여 자전거 추가
	static const vector<Bicycle*> getRentBicycles();	// 대여한 모든 자전거 조회
};


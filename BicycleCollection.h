#pragma once

#include <string>
#include <vector>
#include "Bicycle.h"
using namespace std;

// 모든 자전거를 저장하는 entity 클래스
class BicycleCollection {
private:
	static vector<Bicycle*> bicycleList;
public:
	static void addNewBicycle(string id, string productName);	// 자전거 추가
	static Bicycle* findBicycle(string id);		// Bicycle 존재 여부 확인 후, 존재한다면 Bicycle 주소를 반환하고, 그렇지 않다면 nullptr 반환
};
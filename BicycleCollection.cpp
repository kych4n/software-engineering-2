#include "BicycleCollection.h"

vector<Bicycle*> BicycleCollection::bicycleList;

void BicycleCollection::addNewBicycle(string id, string productName) {		// 새로운 자전거 추가
	bicycleList.push_back(new Bicycle(id, productName));
}

Bicycle* BicycleCollection::findBicycle(string id) {	// 전달받은 id를 가지는 자전거가 있는지 확인
	for (Bicycle* bicycle : bicycleList) {	// 전달받은 id와 일치하는 자전거가 있다면, 자전거 반환
		if (bicycle->getId() == id) {
			return bicycle;
		}
	}
	return nullptr;	// 일치하는 자전거가 없다면, nullptr 반환
}
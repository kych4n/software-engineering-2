#include "RegisterBicycle.h"

// 자전거 등록
void RegisterBicycle::createNewBicycle(string id, string productName) {
	BicycleCollection::addNewBicycle(id, productName);	// collection에 id와 제품명을 전달하여 새로운 자전거 추가
};
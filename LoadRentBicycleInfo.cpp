#include "LoadRentBicycleInfo.h"

// 대여 중인 모든 자전거 조회
vector<Bicycle*> LoadRentBicycleInfo::loadRentBicycles() {	
	return RentBicycleCollection::getRentBicycles();	// collection에서 대여 중인 모든 자전거들을 조회
}
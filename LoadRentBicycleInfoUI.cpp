#include "LoadRentBicycleInfoUI.h"

// 대여 중인 모든 자전거 조회
void LoadRentBicycleInfoUI::loadRentBicycleInfo(ifstream& in_fp, ofstream& out_fp) {
	vector<Bicycle*> rentBicycles = LoadRentBicycleInfo::loadRentBicycles();

	out_fp << "5.1. 자전거 대여 리스트" << endl;
	for (Bicycle* rentBicycle : rentBicycles) {
		out_fp << "> " << rentBicycle->getId() << " " << rentBicycle->getProductName() << endl; 	// 대여한 자전거 id, 제품명 출력
	}
	out_fp << endl;
}

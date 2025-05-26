#include "RentBicycleUI.h"

// 자전거 대여
void RentBicycleUI::selectBicycle(ifstream& in_fp, ofstream& out_fp) {
	string id;
	in_fp >> id;		// 관리자가 자전거 id 입력

	Bicycle* rentBicycle = RentBicycle::rentBicycle(id);	// id를 가지는 자전거 대여

	out_fp << "4.1. 자전거 대여" << endl;
	if (rentBicycle != nullptr) {	// 자전거 대여가 성공한다면, 자전거 id, 제품명 출력
		out_fp << "> " << rentBicycle->getId() << " " << rentBicycle->getProductName() << endl;
	}
	out_fp << endl;
}

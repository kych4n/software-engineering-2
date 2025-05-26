#include "RegisterBicycleUI.h"

// 자전거 등록
void RegisterBicycleUI::createNewBicycle(ifstream& in_fp, ofstream& out_fp) {
	string id, productName;
	in_fp >> id >> productName;		// 관리자가 자전거 id, 제품명 입력

	RegisterBicycle::createNewBicycle(id, productName);		// 자전거 등록

	out_fp << "3.1. 자전거 등록" << endl;
	out_fp << "> " << id << " " << productName << endl;	// 자전거 id, 제품명 출력
	out_fp << endl;
};
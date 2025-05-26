#pragma once

#include <fstream>
#include "RegisterBicycle.h"
using namespace std;

// 자전거 등록 boundary 클래스
class RegisterBicycleUI {
public:
	static void createNewBicycle(ifstream& in_fp, ofstream& out_fp);	// 자전거 id, 제품명을 입력받아 control 클래스에 전달하고, 자전거 id, 제품명 출력
};
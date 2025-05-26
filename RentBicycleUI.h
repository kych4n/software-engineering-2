#pragma once

#include <string>
#include <fstream>
#include "RentBicycle.h"
using namespace std;

// 자전거 대여 boundary 클래스
class RentBicycleUI {
public:
	static void selectBicycle(ifstream& in_fp, ofstream& out_fp);	// 대여할 자전거의 id를 입력받아 control 클래스에 전달하고, 자전거 id와 제품명 출력
};


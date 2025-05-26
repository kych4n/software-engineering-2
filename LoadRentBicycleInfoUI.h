#pragma once

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "LoadRentBicycleInfo.h"
#include <fstream>
using namespace std;

// 자전거 대여 정보를 조회하는 boundary 클래스
class LoadRentBicycleInfoUI {
public:
	static void loadRentBicycleInfo(ifstream& in_fp, ofstream& out_fp);	// 대여 중인 모든 자전거의 정보를 출력
};

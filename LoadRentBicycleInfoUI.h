#pragma once

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "LoadRentBicycleInfo.h"
#include <fstream>
using namespace std;

// ������ �뿩 ������ ��ȸ�ϴ� boundary Ŭ����
class LoadRentBicycleInfoUI {
public:
	static void loadRentBicycleInfo(ifstream& in_fp, ofstream& out_fp);	// �뿩 ���� ��� �������� ������ ���
};

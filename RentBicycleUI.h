#pragma once

#include <string>
#include <fstream>
#include "RentBicycle.h"
using namespace std;

// ������ �뿩 boundary Ŭ����
class RentBicycleUI {
public:
	static void selectBicycle(ifstream& in_fp, ofstream& out_fp);	// �뿩�� �������� id�� �Է¹޾� control Ŭ������ �����ϰ�, ������ id�� ��ǰ�� ���
};


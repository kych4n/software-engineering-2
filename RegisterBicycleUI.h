#pragma once

#include <fstream>
#include "RegisterBicycle.h"
using namespace std;

// ������ ��� boundary Ŭ����
class RegisterBicycleUI {
public:
	static void createNewBicycle(ifstream& in_fp, ofstream& out_fp);	// ������ id, ��ǰ���� �Է¹޾� control Ŭ������ �����ϰ�, ������ id, ��ǰ�� ���
};
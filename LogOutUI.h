#pragma once

#include <string>
#include <fstream>
#include "LogOut.h"
using namespace std;

// �α׾ƿ� boundary Ŭ����
class LogOutUI {
public:
	static void logOutAccount(ifstream& in_fp, ofstream& out_fp);	// id�� �Է¹޾� control Ŭ������ �����ϰ�, �α׾ƿ��� id ���
};
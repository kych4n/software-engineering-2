#pragma once

#include <string>
#include <fstream>
#include "LogIn.h"
using namespace std;

// �α��� boundary Ŭ����
class LogInUI {
public:
	static void logInAccount(ifstream& in_fp, ofstream& out_fp);	// id�� ��й�ȣ�� �Է¹޾� control Ŭ������ �����ϰ�, id�� ��й�ȣ ���
};
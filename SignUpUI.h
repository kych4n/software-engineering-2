#pragma once

#include <fstream>
#include "SignUp.h"
using namespace std;

// ȸ������ boundary Ŭ����
class SignUpUI {
public:
	static void createNewMember(ifstream& in_fp, ofstream& out_fp);	// id, ��й�ȣ, ��ȭ��ȣ�� �Է¹޾� control Ŭ������ �����ϰ�, id, ��й�ȣ, ��ȭ��ȣ�� ���
};
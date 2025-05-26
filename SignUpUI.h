#pragma once

#include <fstream>
#include "SignUp.h"
using namespace std;

// 회원가입 boundary 클래스
class SignUpUI {
public:
	static void createNewMember(ifstream& in_fp, ofstream& out_fp);	// id, 비밀번호, 전화번호를 입력받아 control 클래스에 전달하고, id, 비밀번호, 전화번호를 출력
};
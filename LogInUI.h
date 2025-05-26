#pragma once

#include <string>
#include <fstream>
#include "LogIn.h"
using namespace std;

// 로그인 boundary 클래스
class LogInUI {
public:
	static void logInAccount(ifstream& in_fp, ofstream& out_fp);	// id와 비밀번호를 입력받아 control 클래스에 전달하고, id와 비밀번호 출력
};
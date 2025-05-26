#pragma once

#include <string>
#include <fstream>
#include "LogOut.h"
using namespace std;

// 로그아웃 boundary 클래스
class LogOutUI {
public:
	static void logOutAccount(ifstream& in_fp, ofstream& out_fp);	// id를 입력받아 control 클래스에 전달하고, 로그아웃된 id 출력
};
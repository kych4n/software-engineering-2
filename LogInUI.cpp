#include "LogInUI.h"

// 로그인
void LogInUI::logInAccount(ifstream& in_fp, ofstream& out_fp) {
	string id, password;

	in_fp >> id >> password;		// id, password 입력

	out_fp << "2.1. 로그인" << endl;
	if (LogIn::logInAccount(id, password) != nullptr) {	// 계정이 존재한다면, id, password 출력
		out_fp << "> " << id << " " << password << endl;	
	}
	out_fp << endl;
}
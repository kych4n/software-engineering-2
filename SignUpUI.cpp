#include "SignUpUI.h"

// 회원가입
void SignUpUI::createNewMember(ifstream& in_fp, ofstream& out_fp) {
	string id, password, phoneNumber;
	in_fp >> id >> password >> phoneNumber;		// 사용자가 id, password, phoneNumber 입력

	SignUp::createNewMember(id, password, phoneNumber);		// 회원가입

	out_fp << "1.1. 회원가입" << "\n";
	out_fp << "> " << id << " " << password << " " << phoneNumber << endl;	// id, password, phoneNumber 출력
	out_fp << endl;
};
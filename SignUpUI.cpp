#include "SignUpUI.h"

// ȸ������
void SignUpUI::createNewMember(ifstream& in_fp, ofstream& out_fp) {
	string id, password, phoneNumber;
	in_fp >> id >> password >> phoneNumber;		// ����ڰ� id, password, phoneNumber �Է�

	SignUp::createNewMember(id, password, phoneNumber);		// ȸ������

	out_fp << "1.1. ȸ������" << "\n";
	out_fp << "> " << id << " " << password << " " << phoneNumber << endl;	// id, password, phoneNumber ���
	out_fp << endl;
};
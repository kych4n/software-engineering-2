#include "LogInUI.h"

// �α���
void LogInUI::logInAccount(ifstream& in_fp, ofstream& out_fp) {
	string id, password;

	in_fp >> id >> password;		// id, password �Է�

	out_fp << "2.1. �α���" << endl;
	if (LogIn::logInAccount(id, password) != nullptr) {	// ������ �����Ѵٸ�, id, password ���
		out_fp << "> " << id << " " << password << endl;	
	}
	out_fp << endl;
}
#include "LogOutUI.h"

// �α׾ƿ�
void LogOutUI::logOutAccount(ifstream& in_fp, ofstream& out_fp) {
	Account* logOutAccount = LogOut::logOutAccount();

	out_fp << "2.2. �α׾ƿ�" << endl;
	out_fp << "> " << logOutAccount->getId() << endl;
	out_fp << endl;
}
#include "LogOutUI.h"

// ·Î±×¾Æ¿ô
void LogOutUI::logOutAccount(ifstream& in_fp, ofstream& out_fp) {
	Account* logOutAccount = LogOut::logOutAccount();

	out_fp << "2.2. ·Î±×¾Æ¿ô" << endl;
	out_fp << "> " << logOutAccount->getId() << endl;
	out_fp << endl;
}
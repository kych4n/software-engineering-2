#include "LogOut.h"

// �α׾ƿ�
Account* LogOut::logOutAccount() {
	return CurrentLogInAccount::removeLogInAccount();
}
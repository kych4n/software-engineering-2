#include "LogOut.h"

// ·Î±×¾Æ¿ô
Account* LogOut::logOutAccount() {
	return CurrentLogInAccount::removeLogInAccount();
}
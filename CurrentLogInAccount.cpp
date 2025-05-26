#include "CurrentLoginAccount.h"

Account* CurrentLogInAccount::currentLogInAccount = nullptr;

// 현재 로그인 계정을 전달받은 계정으로 설정
void CurrentLogInAccount::setLogInAccount(Account* account) {
	currentLogInAccount = account;
}

// 현재 로그인 계정이 없도록 설정
Account* CurrentLogInAccount::removeLogInAccount() {
	Account* logOutAccount = currentLogInAccount;
	currentLogInAccount = nullptr;	// 현재 로그인 계정을 nullptr로 설정
	return logOutAccount;	// 이전에 로그인된 계정을 반환
}
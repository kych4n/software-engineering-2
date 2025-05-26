#pragma once

#include "Account.h"
using namespace std;

// 현재 로그인된 계정을 설정하는 entity 클래스
class CurrentLogInAccount {	
private:
	static Account* currentLogInAccount;
public:
	static void setLogInAccount(Account* account);	// 현재 로그인된 계정 설정
	static Account* removeLogInAccount();	// 현재 로그인 계정이 없도록 설정하고, 이전에 로그인된 계정을 반환
};
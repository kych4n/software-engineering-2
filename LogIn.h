#pragma once

#include <string>
#include "AccountCollection.h"
#include "CurrentLogInAccount.h"
using namespace std;

// 로그인 control 클래스
class LogIn {
public:
	static Account* logInAccount(string id, string password);	// id와 password로 로그인
};
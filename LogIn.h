#pragma once

#include <string>
#include "AccountCollection.h"
#include "CurrentLogInAccount.h"
using namespace std;

// �α��� control Ŭ����
class LogIn {
public:
	static Account* logInAccount(string id, string password);	// id�� password�� �α���
};
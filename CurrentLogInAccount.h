#pragma once

#include "Account.h"
using namespace std;

// ���� �α��ε� ������ �����ϴ� entity Ŭ����
class CurrentLogInAccount {	
private:
	static Account* currentLogInAccount;
public:
	static void setLogInAccount(Account* account);	// ���� �α��ε� ���� ����
	static Account* removeLogInAccount();	// ���� �α��� ������ ������ �����ϰ�, ������ �α��ε� ������ ��ȯ
};
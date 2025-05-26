#include "CurrentLoginAccount.h"

Account* CurrentLogInAccount::currentLogInAccount = nullptr;

// ���� �α��� ������ ���޹��� �������� ����
void CurrentLogInAccount::setLogInAccount(Account* account) {
	currentLogInAccount = account;
}

// ���� �α��� ������ ������ ����
Account* CurrentLogInAccount::removeLogInAccount() {
	Account* logOutAccount = currentLogInAccount;
	currentLogInAccount = nullptr;	// ���� �α��� ������ nullptr�� ����
	return logOutAccount;	// ������ �α��ε� ������ ��ȯ
}
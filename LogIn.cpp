#include "LogIn.h"

// id�� password�� �α���
Account* LogIn::logInAccount(string id, string password) {
	Account* loginResult = AccountCollection::findAccount(id, password);	// collection�� id�� ��й�ȣ�� ���� ������ �ִ��� ��ȸ

	if (loginResult != nullptr) {	// ������ �����Ѵٸ�, ���� �α��� �������� ����
		CurrentLogInAccount::setLogInAccount(loginResult);
	}
	return loginResult;
}
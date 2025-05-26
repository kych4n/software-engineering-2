#pragma once

#include <vector>
#include <string>
#include "Account.h"
using namespace std;

// ��� ������ �����ϴ� entity Ŭ����
class AccountCollection {
private:
	static vector<Account*> accountList;
public:
	static void addNewAccount(string id, string password, string phoneNumber);	// Account �߰�
	static Account* findAccount(string id, string password);	// Account ���� ���� Ȯ�� ��, �����Ѵٸ� Account �ּҸ� ��ȯ�ϰ�, �׷��� �ʴٸ� nullptr ��ȯ
};
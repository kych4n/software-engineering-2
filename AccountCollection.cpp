#include "AccountCollection.h"

vector<Account*> AccountCollection::accountList;

void AccountCollection::addNewAccount(string id, string password, string phoneNumber) {		// ȸ������ �� ���� ���
	accountList.push_back(new Account(id, password, phoneNumber));
}

Account* AccountCollection::findAccount(string id, string password) {	// ���޹��� id�� password�� ������ ������ �ִ��� Ȯ��
	for (Account* account : accountList) {
		if (account->getId() == id && account->getPassword() == password) {	// ���޹��� id�� ��й�ȣ�� ��ġ�ϴ� ������ �ִٸ�, ���� ��ȯ
			return account;
		}
	}
	return nullptr;	// ��ġ�ϴ� ������ ���ٸ� nullptr ��ȯ
}
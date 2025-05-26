#include "AccountCollection.h"

vector<Account*> AccountCollection::accountList;

void AccountCollection::addNewAccount(string id, string password, string phoneNumber) {		// 회원가입 시 계정 등록
	accountList.push_back(new Account(id, password, phoneNumber));
}

Account* AccountCollection::findAccount(string id, string password) {	// 전달받은 id와 password를 가지는 계정이 있는지 확인
	for (Account* account : accountList) {
		if (account->getId() == id && account->getPassword() == password) {	// 전달받은 id와 비밀번호와 일치하는 계정이 있다면, 계정 반환
			return account;
		}
	}
	return nullptr;	// 일치하는 계정이 없다면 nullptr 반환
}
#include "Account.h"

Account::Account(string id, string password, string phoneNumber) {
	this->id = id;
	this->password = password;
	this->phoneNumber = phoneNumber;
}

// id ��ȯ
string Account::getId() {
	return this->id;
}

// ��й�ȣ ��ȯ
string Account::getPassword() {	
	return this->password;
}
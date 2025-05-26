#include "Account.h"

Account::Account(string id, string password, string phoneNumber) {
	this->id = id;
	this->password = password;
	this->phoneNumber = phoneNumber;
}

// id 반환
string Account::getId() {
	return this->id;
}

// 비밀번호 반환
string Account::getPassword() {	
	return this->password;
}
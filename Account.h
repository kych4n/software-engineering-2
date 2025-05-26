#pragma once

#include <string>
using namespace std;

// 계정 정보를 저장하는 entity 클래스
class Account {
private:
	string id;
	string password;
	string phoneNumber;
public:
	Account(string id, string password, string phoneNumber);
	string getId();
	string getPassword();
};
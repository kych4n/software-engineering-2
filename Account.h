#pragma once

#include <string>
using namespace std;

// ���� ������ �����ϴ� entity Ŭ����
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
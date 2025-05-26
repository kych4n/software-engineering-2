#pragma once

#include <vector>
#include <string>
#include "Account.h"
using namespace std;

// 모든 계정을 저장하는 entity 클래스
class AccountCollection {
private:
	static vector<Account*> accountList;
public:
	static void addNewAccount(string id, string password, string phoneNumber);	// Account 추가
	static Account* findAccount(string id, string password);	// Account 존재 여부 확인 후, 존재한다면 Account 주소를 반환하고, 그렇지 않다면 nullptr 반환
};
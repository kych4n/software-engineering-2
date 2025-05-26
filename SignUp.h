#pragma once

#include <string>
#include "AccountCollection.h"
using namespace std;

// 회원가입 control 클래스
class SignUp {
public:
	static void createNewMember(string id, string password, string phoneNumber);
};
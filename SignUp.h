#pragma once

#include <string>
#include "AccountCollection.h"
using namespace std;

// ȸ������ control Ŭ����
class SignUp {
public:
	static void createNewMember(string id, string password, string phoneNumber);
};
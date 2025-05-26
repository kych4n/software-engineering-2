#include "SignUp.h"

// 회원가입
void SignUp::createNewMember(string id, string password, string phoneNumber) {
	AccountCollection::addNewAccount(id, password, phoneNumber);	// collection에 id, 비밀번호, 전화번호를 가지는 새로운 계정 추가
};
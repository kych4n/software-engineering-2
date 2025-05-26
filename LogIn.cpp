#include "LogIn.h"

// id와 password로 로그인
Account* LogIn::logInAccount(string id, string password) {
	Account* loginResult = AccountCollection::findAccount(id, password);	// collection에 id와 비밀번호를 가진 계정이 있는지 조회

	if (loginResult != nullptr) {	// 계정이 존재한다면, 현재 로그인 계정으로 설정
		CurrentLogInAccount::setLogInAccount(loginResult);
	}
	return loginResult;
}
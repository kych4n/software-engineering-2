#include "SignUp.h"

// ȸ������
void SignUp::createNewMember(string id, string password, string phoneNumber) {
	AccountCollection::addNewAccount(id, password, phoneNumber);	// collection�� id, ��й�ȣ, ��ȭ��ȣ�� ������ ���ο� ���� �߰�
};
#pragma once

#include <string>
using namespace std;

// ������ ������ �����ϴ� entity Ŭ����
class Bicycle {
private:
	string id;
	string productName;
public:
	Bicycle(string id, string productName);
	string getId();		// ������ id ��ȯ
	string getProductName();	// ������ ��ǰ�� ��ȯ
};

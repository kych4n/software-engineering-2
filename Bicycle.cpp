#include "Bicycle.h"

Bicycle::Bicycle(string id, string productName) {
	this->id = id;
	this->productName = productName;
}

string Bicycle::getId() {	// ������ id ��ȯ
	return this->id;
}

string Bicycle::getProductName() {	// ������ ��ǰ�� ��ȯ
	return this->productName;
}
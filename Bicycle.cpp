#include "Bicycle.h"

Bicycle::Bicycle(string id, string productName) {
	this->id = id;
	this->productName = productName;
}

string Bicycle::getId() {	// 자전거 id 반환
	return this->id;
}

string Bicycle::getProductName() {	// 자전거 제품명 반환
	return this->productName;
}
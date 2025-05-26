#pragma once

#include <string>
using namespace std;

// 자전거 정보를 저장하는 entity 클래스
class Bicycle {
private:
	string id;
	string productName;
public:
	Bicycle(string id, string productName);
	string getId();		// 자전거 id 반환
	string getProductName();	// 자전거 제품명 반환
};

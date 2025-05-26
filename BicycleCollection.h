#pragma once

#include <string>
#include <vector>
#include "Bicycle.h"
using namespace std;

// ��� �����Ÿ� �����ϴ� entity Ŭ����
class BicycleCollection {
private:
	static vector<Bicycle*> bicycleList;
public:
	static void addNewBicycle(string id, string productName);	// ������ �߰�
	static Bicycle* findBicycle(string id);		// Bicycle ���� ���� Ȯ�� ��, �����Ѵٸ� Bicycle �ּҸ� ��ȯ�ϰ�, �׷��� �ʴٸ� nullptr ��ȯ
};
#pragma once

#include <vector>
#include "Bicycle.h"
using namespace std;

// �뿩�� �����ŵ��� �����ϴ� entity Ŭ����
class RentBicycleCollection
{
private:
	static vector<Bicycle*> rentBicycleList;
public:
	static void addRentBicycle(Bicycle* bicycle);	// �뿩 ������ �߰�
	static const vector<Bicycle*> getRentBicycles();	// �뿩�� ��� ������ ��ȸ
};


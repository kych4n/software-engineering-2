#include "LoadRentBicycleInfo.h"

// �뿩 ���� ��� ������ ��ȸ
vector<Bicycle*> LoadRentBicycleInfo::loadRentBicycles() {	
	return RentBicycleCollection::getRentBicycles();	// collection���� �뿩 ���� ��� �����ŵ��� ��ȸ
}
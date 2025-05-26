#include "BicycleCollection.h"

vector<Bicycle*> BicycleCollection::bicycleList;

void BicycleCollection::addNewBicycle(string id, string productName) {		// ���ο� ������ �߰�
	bicycleList.push_back(new Bicycle(id, productName));
}

Bicycle* BicycleCollection::findBicycle(string id) {	// ���޹��� id�� ������ �����Ű� �ִ��� Ȯ��
	for (Bicycle* bicycle : bicycleList) {	// ���޹��� id�� ��ġ�ϴ� �����Ű� �ִٸ�, ������ ��ȯ
		if (bicycle->getId() == id) {
			return bicycle;
		}
	}
	return nullptr;	// ��ġ�ϴ� �����Ű� ���ٸ�, nullptr ��ȯ
}
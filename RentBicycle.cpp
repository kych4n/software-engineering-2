#include "RentBicycle.h"

// ������ �뿩
Bicycle* RentBicycle::rentBicycle(string id)
{
    Bicycle* rentResult = BicycleCollection::findBicycle(id);   // �뿩�Ϸ��� ������ ã��
    if (rentResult != nullptr) {    // �뿩�Ϸ��� �����Ű� �����ϴ� �����Ŷ�� �뿩
        RentBicycleCollection::addRentBicycle(rentResult);
    }
    return rentResult;
}

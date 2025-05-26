#include "LoadRentBicycleInfoUI.h"

// �뿩 ���� ��� ������ ��ȸ
void LoadRentBicycleInfoUI::loadRentBicycleInfo(ifstream& in_fp, ofstream& out_fp) {
	vector<Bicycle*> rentBicycles = LoadRentBicycleInfo::loadRentBicycles();

	out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;
	for (Bicycle* rentBicycle : rentBicycles) {
		out_fp << "> " << rentBicycle->getId() << " " << rentBicycle->getProductName() << endl; 	// �뿩�� ������ id, ��ǰ�� ���
	}
	out_fp << endl;
}

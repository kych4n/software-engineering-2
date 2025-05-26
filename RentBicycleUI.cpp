#include "RentBicycleUI.h"

// ������ �뿩
void RentBicycleUI::selectBicycle(ifstream& in_fp, ofstream& out_fp) {
	string id;
	in_fp >> id;		// �����ڰ� ������ id �Է�

	Bicycle* rentBicycle = RentBicycle::rentBicycle(id);	// id�� ������ ������ �뿩

	out_fp << "4.1. ������ �뿩" << endl;
	if (rentBicycle != nullptr) {	// ������ �뿩�� �����Ѵٸ�, ������ id, ��ǰ�� ���
		out_fp << "> " << rentBicycle->getId() << " " << rentBicycle->getProductName() << endl;
	}
	out_fp << endl;
}

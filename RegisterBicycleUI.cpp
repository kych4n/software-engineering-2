#include "RegisterBicycleUI.h"

// ������ ���
void RegisterBicycleUI::createNewBicycle(ifstream& in_fp, ofstream& out_fp) {
	string id, productName;
	in_fp >> id >> productName;		// �����ڰ� ������ id, ��ǰ�� �Է�

	RegisterBicycle::createNewBicycle(id, productName);		// ������ ���

	out_fp << "3.1. ������ ���" << endl;
	out_fp << "> " << id << " " << productName << endl;	// ������ id, ��ǰ�� ���
	out_fp << endl;
};
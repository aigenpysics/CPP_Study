#include <iostream>
using namespace std;

int main1()
{
	int number;
	cin >> number;

	/* IF�� */
	// �����ų ����� �ϳ��� ���� {} ���� ����.
	if (number % 2 == 0) cout << "¦��" << endl;
	
	else cout << "Ȧ��" << endl;

	/* ���� ������ */
	//���� ? ���� �� ���� : ������ �� ����
	cout << (number % 2 == 0 ? "¦���Դϴ�" : "Ȧ���Դϴ�") << endl;

	/* switch - case */
	switch (number)
	{
	case 0:
		cout << "������ 0 �Դϴ�." << endl;
		break;

	case 1:
		cout << "������ 1 �Դϴ�." << endl;
		break;

	default:
		cout << "�� ���� �����Դϴ�." << endl;
		break;
	}
	return 0;
}
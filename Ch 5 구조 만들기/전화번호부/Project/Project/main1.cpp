#include <iostream>
#include <string>
#include "PhoneBook.h"

using namespace std;

int main1()
{
	PhoneBook my_phonebook;

	//�ʱ� ������
	my_phonebook.AddContact("������","1234-1234");
	my_phonebook.AddContact("���뵶","1234-1234");
	my_phonebook.AddContact("�ؿ�������","1234-1234");

	int menu_number;

	while (true)
	{
		cout << "1: ��� ���\n";
		cout << "2: �˻�\n";
		cout << "3: �߰�\n";
		cout << "4: ����\n";
		cout << "X: ����\n";
		cout << "�Ŵ��� �������ּ��� : ";

		cin >> menu_number;
		cin.ignore();
		
		//if-else��
		if (menu_number == 1)
		{
			my_phonebook.PrintAll();
		}
		else if (menu_number == 2)
		{
			my_phonebook.FindByName();
		}
		else if (menu_number == 3)
		{
			my_phonebook.AddContact();
		}
		else if (menu_number == 4)
		{
			my_phonebook.DeleteByName();
		}
		else
		{
			cout << "�����մϴ�." << endl;
			break;
		}
	}
	return 0;
}
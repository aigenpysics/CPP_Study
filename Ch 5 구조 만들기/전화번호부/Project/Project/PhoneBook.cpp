#include "PhoneBook.h"
#include <cassert>
#include <iostream>
#include <cstring>

using namespace std;

PhoneBook::PhoneBook()
{
	contacts_ = new Contact[capacity_];
}
PhoneBook::~PhoneBook()
{
	if (contacts_)
		delete[] contacts_;
}

bool PhoneBook::IsEmpty()
{
	//����� �� �� assert ���� ������ false�� �Ǹ� ���� ó��
	assert(num_contacts_ >= 0);

	if (num_contacts_ == 0)
		return true;
	else
		return false;
}

bool PhoneBook::IsFull()
{
	//Debug
	//cout << "num : " << num_contacts_ << "cap : " << capacity_ << endl;
	if (num_contacts_ == capacity_)
		return true;
	else
		return false;
}

void PhoneBook::PrintAll()
{
	for (int i = 0; i < num_contacts_; i++)
	{
		PrintContact(i);
	}
}

void PhoneBook::PrintContact(int index)
{
	cout << index << " ";
	cout << contacts_[index].name;
	cout << ", " << contacts_[index].phone << endl;
	//���� �̸�, ��ȣ
}

void PhoneBook::AddContact(const char *name, const char *phone)
{
	assert(!IsFull());
	memcpy(contacts_[num_contacts_].name, name, sizeof(contacts_[num_contacts_].name));
	memcpy(contacts_[num_contacts_].phone, phone, sizeof(contacts_[num_contacts_].phone));

	num_contacts_++;	//Contact�� �߰��� ������ num ++
}

void PhoneBook::AddContact()
{	
	if (IsFull())
	{
		//More ����ó ���� ���� ���ֱ�
		/*���� �õ�*/
		//Contact* old_contacts_ = contacts_;
		//capacity_++;
		//contacts_ = new Contact[capacity_];
		//num_contacts_ = 0;
		////���� �� ����
		//for (int i = 0; i < capacity_; i++)
		//{
		//	AddContact(old_contacts_[i].name, old_contacts_[i].phone);
		//}
		//num_contacts_ = capacity_ - 1;
		//
		//delete[] old_contacts_;
		
		/*������ �õ�*/
		Contact* new_contacts = new Contact[capacity_ + 1];
		for (int i = 0; i < capacity_; i++)
		{
			new_contacts[i] = contacts_[i];
		}
		delete[] contacts_;
		contacts_ = new_contacts;
		capacity_++;
	}

	//Buffer
	char new_name[kMaxStr];
	char new_phone[kMaxStr];

	cout << "�̸��� �Է����ּ��� : " ;
	cin.getline(new_name, sizeof(new_name));

	cout << "��ȭ��ȣ�� �Է����ּ��� : ";
	cin.getline(new_phone, sizeof(new_phone));

	AddContact(new_name, new_phone);
}

int PhoneBook::FindByName()
{
	char search_name[kMaxStr];
	cout << "�˻��� �̸��� �Է����ּ��� :";
	cin.getline(search_name, sizeof(search_name));

	//TODO IsEqual(), PrintContact(i), return i
	for (int i = 0; i < num_contacts_; i++)
	{
		if (IsEqual(contacts_[i].name, search_name))
		{
			PrintContact(i);
			return i;
		}
	}
	cout << search_name << "���� ã�� ���߽��ϴ�." << endl;
	return -1;

}
bool PhoneBook::IsEqual(const char* str1, const char* str2)
{
	for (int i = 0; i < kMaxStr; i++)
	{
		if (str1[i] != str2[i]) return false;
		if (str1[i] == '\0') return true;
	}
	return true;
}
void PhoneBook::DeleteByName()
{
	int index = FindByName();

	if (index >= 0)
	{
		//TODO �߰��� �������� ��� ������ ����
		for (int i = index; i < num_contacts_; i++)
		{
			memcpy(&contacts_[i - 1], &contacts_[i], sizeof(Contact));
		}
		num_contacts_ -= 1;
	}
}
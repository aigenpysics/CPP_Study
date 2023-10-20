#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

const int kMaxStr = 20;

struct Contact
{
	char name[kMaxStr];
	char phone[kMaxStr];
};

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	bool IsEmpty();
	bool IsFull();
	void PrintAll();
	void PrintContact(int i);
	void AddContact();
	void AddContact(const char* name, const char* phone);
	int FindByName();
	bool IsEqual(const char* st1, const char* str2);
	void DeleteByName();

private:
	int capacity_ = 3; //����ó �ִ� ���� (�߰�/���� ����)
	int num_contacts_ = 0;
	Contact* contacts_ = nullptr;
};

#endif

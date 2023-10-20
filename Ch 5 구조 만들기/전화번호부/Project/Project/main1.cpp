#include <iostream>
#include <string>
#include "PhoneBook.h"

using namespace std;

int main1()
{
	PhoneBook my_phonebook;

	//초기 데이터
	my_phonebook.AddContact("김정헌","1234-1234");
	my_phonebook.AddContact("성취독","1234-1234");
	my_phonebook.AddContact("붕옥아이젠","1234-1234");

	int menu_number;

	while (true)
	{
		cout << "1: 모두 출력\n";
		cout << "2: 검색\n";
		cout << "3: 추가\n";
		cout << "4: 삭제\n";
		cout << "X: 종료\n";
		cout << "매뉴를 선택해주세요 : ";

		cin >> menu_number;
		cin.ignore();
		
		//if-else문
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
			cout << "종료합니다." << endl;
			break;
		}
	}
	return 0;
}
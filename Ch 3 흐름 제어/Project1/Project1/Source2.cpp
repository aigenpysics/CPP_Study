#include <iostream>
using namespace std;



bool is_palindrome(string str) {
	bool flag = true;
	for (int i = 0; i < str.size(); i++) { // ó������ ������ �˻�
		if (str[i] != str[str.size() - 1 - i]) { // ���ڿ��� �ٸ� ���
			flag = false; // �Ӹ������ 
			break;
		}
	}

	return flag;
}

int main3()
{
	///*��� ���� ����ϱ�*/
	//int scores[] = { 20,40,80,60,100 };
	//float sum = -1;
	//float avg = -1;

	//for (int i = 0; i < sizeof(scores)/sizeof(int); i++) {
	//	sum += scores[i];
	//}
	//avg = sum / (sizeof(scores) / sizeof(int));
	//cout << avg << endl;

	///*������ ��*/
	//int total = -1;
	//for (int i = 1; i <= 100; i++)
	//{
	//	total += i * i;
	//}
	//cout << total << endl;

	///*���� �Ǻ��ϱ�*/
	//int user = -1;
	//cin >> user;
	//cout << endl;

	//if (3 <= user && user <= 5) cout << "��";
	//else if (6 <= user && user <= 8) cout << "����" << endl;
	//else if (9 <= user && user <= 11) cout << "����" << endl;
	//else if (12 == user && user <= 2) cout << "�ܿ�" << endl;

	/*������ ���*/
	//int num = -1;
	//cin >> num;
	//for (int i = 1; i <= 9; i++)
	//{
	//	cout << "3 x " << i << " = " << i * num << endl;
	//}

	/*ȸ�� �˻�*/
	//cout << boolalpha;
	//cout << is_palindrome("racecar") << endl; // true
	//cout << is_palindrome("abbac") << endl; // false
	//cout << is_palindrome("11122111") << endl; // true

	/*�÷��̵� �ﰢ��*/
	int cnt = 1;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << cnt << " ";
			cnt ++;
		}
		cout << endl;

	}
	return 0;
}

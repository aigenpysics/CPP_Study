#include <iostream>
using namespace std;


int main2()
{
	/*For��*/
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << endl;

	/*For�� - �迭*/
	int MyArr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int j = 0; j < sizeof(MyArr)/sizeof(MyArr[0]); j++) 
	//MyArr ��ü�� ũ��� �ڷ����� ũ�� x ������ ����
	{
		cout << MyArr[j] << " ";
	}
	cout << endl;

	/*For�� - ���ڿ� ���*/
	char MyStr[] = "Hello\0 World!";
	for (int i = 0; i < sizeof(MyStr); i++)
	{
		if (MyStr[i] != '\0') cout << MyStr[i];
		else break;
	}
	cout << endl;

	/*For�� - ���ڿ� ���2*/
	char MyStr2[] = "Hello\0 World!";
	for (int i = 0; MyStr2[i] != '\0'; i++)
	{
		cout << MyStr2[i];
	}
	cout << endl;

	/*while�� ����*/
	int l = 0;
	while (l < 10) // while(���ǹ�)
	{
		cout << l << " ";
		l++;
	}
	cout << endl;

	/*������ True*/
	int i = 0;
	while (true) // while(���ǹ�)
	{			 // for (;true;)�� ������
		if (i > 9) break;	//��������
		cout << i << " ";
		i++;
	}
	cout << endl;

	/*while�� - ���ڿ� ���*/
	char my_string[] = "Hello\0 world";
	int m = 0;
	while ( m < sizeof(my_string) && my_string[m] != '\0' ) 
	{
		cout << my_string[m];
		m++;
	}
	return 0;
}
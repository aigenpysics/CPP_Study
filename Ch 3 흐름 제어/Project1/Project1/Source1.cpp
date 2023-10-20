#include <iostream>
using namespace std;


int main2()
{
	/*For문*/
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << endl;

	/*For문 - 배열*/
	int MyArr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int j = 0; j < sizeof(MyArr)/sizeof(MyArr[0]); j++) 
	//MyArr 자체의 크기는 자료형의 크기 x 원소의 개수
	{
		cout << MyArr[j] << " ";
	}
	cout << endl;

	/*For문 - 문자열 출력*/
	char MyStr[] = "Hello\0 World!";
	for (int i = 0; i < sizeof(MyStr); i++)
	{
		if (MyStr[i] != '\0') cout << MyStr[i];
		else break;
	}
	cout << endl;

	/*For문 - 문자열 출력2*/
	char MyStr2[] = "Hello\0 World!";
	for (int i = 0; MyStr2[i] != '\0'; i++)
	{
		cout << MyStr2[i];
	}
	cout << endl;

	/*while문 사용법*/
	int l = 0;
	while (l < 10) // while(조건문)
	{
		cout << l << " ";
		l++;
	}
	cout << endl;

	/*조건이 True*/
	int i = 0;
	while (true) // while(조건문)
	{			 // for (;true;)와 동일함
		if (i > 9) break;	//종료조건
		cout << i << " ";
		i++;
	}
	cout << endl;

	/*while문 - 문자열 출력*/
	char my_string[] = "Hello\0 world";
	int m = 0;
	while ( m < sizeof(my_string) && my_string[m] != '\0' ) 
	{
		cout << my_string[m];
		m++;
	}
	return 0;
}
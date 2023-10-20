#include <iostream>
using namespace std;



bool is_palindrome(string str) {
	bool flag = true;
	for (int i = 0; i < str.size(); i++) { // 처음부터 끝까지 검사
		if (str[i] != str[str.size() - 1 - i]) { // 문자열이 다를 경우
			flag = false; // 팰린드롬이 
			break;
		}
	}

	return flag;
}

int main3()
{
	///*평균 점수 출력하기*/
	//int scores[] = { 20,40,80,60,100 };
	//float sum = -1;
	//float avg = -1;

	//for (int i = 0; i < sizeof(scores)/sizeof(int); i++) {
	//	sum += scores[i];
	//}
	//avg = sum / (sizeof(scores) / sizeof(int));
	//cout << avg << endl;

	///*제곱의 합*/
	//int total = -1;
	//for (int i = 1; i <= 100; i++)
	//{
	//	total += i * i;
	//}
	//cout << total << endl;

	///*계절 판별하기*/
	//int user = -1;
	//cin >> user;
	//cout << endl;

	//if (3 <= user && user <= 5) cout << "봄";
	//else if (6 <= user && user <= 8) cout << "여름" << endl;
	//else if (9 <= user && user <= 11) cout << "가을" << endl;
	//else if (12 == user && user <= 2) cout << "겨울" << endl;

	/*구구단 출력*/
	//int num = -1;
	//cin >> num;
	//for (int i = 1; i <= 9; i++)
	//{
	//	cout << "3 x " << i << " = " << i * num << endl;
	//}

	/*회문 검사*/
	//cout << boolalpha;
	//cout << is_palindrome("racecar") << endl; // true
	//cout << is_palindrome("abbac") << endl; // false
	//cout << is_palindrome("11122111") << endl; // true

	/*플로이드 삼각형*/
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

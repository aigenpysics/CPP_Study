#include <iostream>
using namespace std;

int main1()
{
	int number;
	cin >> number;

	/* IF문 */
	// 실행시킬 명령이 하나일 떄는 {} 생략 가능.
	if (number % 2 == 0) cout << "짝수" << endl;
	
	else cout << "홀수" << endl;

	/* 삼항 연산자 */
	//조건 ? 참일 때 실행 : 거짓일 떄 실행
	cout << (number % 2 == 0 ? "짝수입니다" : "홀수입니다") << endl;

	/* switch - case */
	switch (number)
	{
	case 0:
		cout << "정수는 0 입니다." << endl;
		break;

	case 1:
		cout << "정수는 1 입니다." << endl;
		break;

	default:
		cout << "그 외의 숫자입니다." << endl;
		break;
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {

	char user_input[100];

	cout << "Input any words." << endl;
	cout << "Input : ";

	cin >> user_input; 
	cout << "Your Input: " << user_input << endl;
	//cin 입력 중간에 빈칸이 있으면 멈춤.
	//Base Line -> Your Input: Base.
	
	cin.getline(user_input, sizeof(user_input)); // 메모리를 받아올 문자 배열의 이름, 최대 사이즈

	/*숫자 입출력*/
	int a = -1;
	int b = -1;
	cin >> a;
	cin >> b;
	cout << a << " " << b << endl;

	/*숫자/문자 입출력*/
	char user_input[100];
	int number = -1;

	cin >> user_input;
	cin.ignore(100, '\n'); //100글자 이후부터 무시하겠다. 혹은 \n이 나오면 그떄 무시하겠다
	cin >> number;
	cout << user_input << " " << number << endl;

	return 0;

}
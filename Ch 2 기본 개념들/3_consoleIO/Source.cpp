#include <iostream>

using namespace std;

int main() {

	char user_input[100];

	cout << "Input any words." << endl;
	cout << "Input : ";

	cin >> user_input; 
	cout << "Your Input: " << user_input << endl;
	//cin �Է� �߰��� ��ĭ�� ������ ����.
	//Base Line -> Your Input: Base.
	
	cin.getline(user_input, sizeof(user_input)); // �޸𸮸� �޾ƿ� ���� �迭�� �̸�, �ִ� ������

	/*���� �����*/
	int a = -1;
	int b = -1;
	cin >> a;
	cin >> b;
	cout << a << " " << b << endl;

	/*����/���� �����*/
	char user_input[100];
	int number = -1;

	cin >> user_input;
	cin.ignore(100, '\n'); //100���� ���ĺ��� �����ϰڴ�. Ȥ�� \n�� ������ �׋� �����ϰڴ�
	cin >> number;
	cout << user_input << " " << number << endl;

	return 0;

}
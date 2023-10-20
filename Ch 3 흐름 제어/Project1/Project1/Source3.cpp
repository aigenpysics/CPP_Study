#include <iostream>
#include <random>
using namespace std;

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> disturb(1, 99);
	int num;
	int number = disturb(gen);
	
	while (1)
	{
		cout << "�Է� : ";
		cin >> num;
		cout << endl;

		if (num == number) {
			cout << "�����Դϴ�" << endl;
			break;
		}
		else if (num < number) cout << "�ʹ� �۾ƿ�!" << endl;
		else if (num > number) cout << "�ʹ� Ŀ��!" << endl;

	}
	return 0;
}
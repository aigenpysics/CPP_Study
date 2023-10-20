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
		cout << "입력 : ";
		cin >> num;
		cout << endl;

		if (num == number) {
			cout << "정답입니다" << endl;
			break;
		}
		else if (num < number) cout << "너무 작아요!" << endl;
		else if (num > number) cout << "너무 커요!" << endl;

	}
	return 0;
}
#include <iostream>
using namespace std;

//const int kMaxStr = 100;	//전역 상수 (global const variable
//bool IsEqual(const char str1[], const char str2[]) //equle const char *str1,const char str2*
//{
//	int size = 0;
//	while (1) {
//		if (str2[size] == '\0')break;
//		size++;
//	}
//	//cout << sizeof(str1)/2 << " " << sizeof(str2)/2 << endl;
//	for (int i = 0; i < size; i++) {
//		if (str1[i] != str2[i])
//			return false;
//	}
//	return true;
//}
void Print(const char* str1)
{
	int size = 0;
	while (1) {
		if (str1[size] == '\0')break;
		size++;
	}
	for (int i = 0; i < size; i++) {
		cout << str1[i];
	}

}

int main4()
{
	const char str1[] = "Hello World!";
	Print(str1);

	//while (1)
	//{
	//	char str2[kMaxStr];
	//	cin >> str2;

	//	if (IsEqual(str1, str2)) break;
	//	cout << "계속합니다" << endl;
	//}
	return 0;
}
#include <iostream>
using namespace std;


int Min(int a, int b)
{
	return a < b ? a : b;	// ���� ������
}

int main(void)
{
	// ���ڿ� ����
	const int kMaxStr = 100;
	char str1[] = "Hello World";
	char str2[kMaxStr];

	// str2 = str1; Error �߻�
	memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
	// str1�� �޸𸮿� ���ۺ��� 3���� �μ��� ����ŭ�� str2�� �޸� �ּҷ� �Űܶ�
	cout << str2 << endl; //hello World
	
	//str1, str2 �� �� �迭�� �����迭�̴�. ũ�⸦ �߰��� �ٲ� �� ���ٴ� ���̴�.
	/*�����Ҵ�*/
	//new Ű���带 ���� �ü������ ���� �������� �޸𸮰� �ʿ��ϴٸ� �䱸
	//���� �ݳ��� �ؾ���
	char* dynamic_arr = new char[kMaxStr];

	memcpy(dynamic_arr, str1, Min(sizeof(dynamic_arr), sizeof(str2)));
	cout << dynamic_arr << endl;

	cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_arr);
	//���Ҵ�
	//dynamic_arr = new char[100];
	delete[] dynamic_arr; // �迭 ���� or ��ȯ
}
#include <iostream>
using namespace std;

int main2()
{
	int a = 123;
	//a��� ������ �����ϴ� ������ 123�̶�� ���� �־��ְڴ�.

	//&, �ּ� ������
	//a�� �޸𸮿� �����Ͽ� ���� ����Ѵ�.
	//&, �޸� �� �ּ� �� ��ü�� ���
	cout << a << " " << &a << endl;

	int* b = &a;					//b�� a�� �ּҸ� ������.
	cout << b << " " << *b << endl; // *b�� b�� �ּҿ� ���� ����� ���� ��� �� 123

	*b = 567;
	cout << a << endl;	//�ּڰ��� ���� �ٲ��� ���� �ִ�.

	double* c = 0;
	cout << sizeof(int) << " " << sizeof(double) << endl;   //4 8
	cout << sizeof(int* ) << " " << sizeof(double*) << endl;//8 8
	//���� �������� ũ���� �� �ּ��� ���̰� �� ũ���� �ʴ�.
	//�� �ּ� ��ü�� ũ��� �����ϴ�.
	cout << sizeof(a) << " " << sizeof(b) << endl;			//4 8

	/*�ּڰ� ��ü�� �ǹ̾���.*/
	//size_t -> 10������ ��ȯ
	cout << b << " " << sizeof(b) << endl;
	cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
	cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

	/*�����Ϳ� �迭*/
	int my_arr[] = { 23,38,56,69,74 };
	char my_str[] = { 'h','e','l','l','o','\n' };
	char* my_ptr = my_str;	//�迭�� �̸��� ������

	cout << *(my_ptr + 1) << endl;
	//�ε����� ���ִ� ���� ���������� ������ �޸� �������� ó�����κ��� �󸶳� �������ִ����� ������ Ư���� �޸𸮿� �����ϴ� ���̴�.
	return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

class MyInt
{
public:
	int data_;
};

class MyDouble
{
public:
	double data_;
};

class MyClass2()
{
public:
	MyClass2(int a) {};
	MyClass2(double b) {};
}

template <typename T> //T ��� �ٸ� ���ڿ��� ����ص� ��.
class MyClass
{
public:
	T data_;
};

int main()
{
	MyClass<int> my_int;
	MyClass<double> my_double;

	cout << sizeof(my_int) << " " << sizeof(my_double) << endl;

	//������ Ŭ������ �ڷ����� �ٲ㼭 �������� �� ��. ���ø��� ����ϸ� �ϳ��� Ŭ�����ε� �����ڷ����� ���� Ŭ������ ���� ��ó�� ��밡���ϴ�.
	return 0;
}
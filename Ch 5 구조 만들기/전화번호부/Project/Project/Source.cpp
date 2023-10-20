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

template <typename T> //T 대신 다른 문자열을 사용해도 됨.
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

	//동일한 클래스를 자료형만 바꿔서 만들어줘야 할 떄. 템플릿을 사용하면 하나의 클래스로도 여러자료형에 대한 클래스를 만든 것처럼 사용가능하다.
	return 0;
}
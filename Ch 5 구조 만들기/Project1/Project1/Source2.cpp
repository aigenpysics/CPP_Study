#include <iostream>
#include <cstring>
using namespace std;

//public, private : ���� ������.
class MyClass
{
public:
	MyClass()	//�Լ��ε� Ŭ���� �̸��� ���� -> ������
	{
		cout << "MyClass() ȣ���" << endl;
	}
	
	MyClass(int a)//�Ű������� �ٸ��� �������� �����ڸ� ���� �� �ִ�.
	{
		cout << "MyClass(int a) ȣ���" << endl;
	}
	
	~MyClass()	// 
	{
		cout << "~MyClass() ȣ���" << endl;
	}
	
	void Add(int a)
	{
		number_ += a;
	}
	
	void Print()
	{
		cout << number_ << endl;
	}
private:
	int number_ = 0; // �ʱⰪ
};

int main3()
{
	//MyClass�� ��ġ �ڷ����� ��ó��
	MyClass my_class1;
	MyClass my_class2(123);

	my_class1.Print();
	my_class2.Print();

	my_class1.Add(1);
	my_class1.Print();

	return 0;
}
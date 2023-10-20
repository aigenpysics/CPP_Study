#include <iostream>
#include<cstring>

using namespace std;

class MyClass2 
{
public:
	MyClas2s()	//������, class �̸��� �̸��� ���� �Լ�
	{
		cout << "MyClass() ȣ���." << endl;
	}
	MyClass(int num)	//������, class �̸��� �̸��� ���� �Լ�
	{
		cout << "MyClass(int r) ȣ���." << endl;
	
		// this pointer
		this->number_ = num;
	}

	~MyClass()	//�Ҹ���, ~ǥ�� ���� �Լ�
	{
		cout << "~MyClass() ȣ���." << endl;
	}

	void Increment(int a)
	{
		number_ += a;
	}
	
	void Print()
	{
		cout << number_ << endl;
	}

private:
	int number_ = 1; //member ����, private ���� << Ŭ���� �ȿ� ���ǵ� �Լ��鿡���� ��� ����
};

int main1() {
	MyClass cls1;		//MyClass() ȣ���.
	MyClass cls2(123);	//MyClass(int r) ȣ���.

	cls1.Print();		//1
	cls2.Print();		//213

	cls1.Increment(100);
	cls1.Print();		//101
	
	//~MyClass() ȣ���.
	//~MyClass() ȣ���.
	return 0;

}
#ifndef MY_CLASS_H //���� �������� ����� �� �� �������� �ѹ��� �ض�.
#define MY_CLASS_H

class MyClass
{
public:
	MyClass();
	MyClass(int a);
	~MyClass();
	
	void Increment(int a);
	void Print();
	void Decrement(int a);
private:
	int number_ = 0;
};

#endif 
#include <iostream>
#include<cstring>

using namespace std;

class MyClass2 
{
public:
	MyClas2s()	//생성자, class 이름과 이름이 같은 함수
	{
		cout << "MyClass() 호출됨." << endl;
	}
	MyClass(int num)	//생성자, class 이름과 이름이 같은 함수
	{
		cout << "MyClass(int r) 호출됨." << endl;
	
		// this pointer
		this->number_ = num;
	}

	~MyClass()	//소멸자, ~표가 붙은 함수
	{
		cout << "~MyClass() 호출됨." << endl;
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
	int number_ = 1; //member 변수, private 변수 << 클래스 안에 정의된 함수들에서만 사용 가능
};

int main1() {
	MyClass cls1;		//MyClass() 호출됨.
	MyClass cls2(123);	//MyClass(int r) 호출됨.

	cls1.Print();		//1
	cls2.Print();		//213

	cls1.Increment(100);
	cls1.Print();		//101
	
	//~MyClass() 호출됨.
	//~MyClass() 호출됨.
	return 0;

}
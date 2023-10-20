#include <iostream>
#include <cstring>
using namespace std;

//public, private : 접근 제한자.
class MyClass
{
public:
	MyClass()	//함수인데 클래스 이름과 같음 -> 생성자
	{
		cout << "MyClass() 호출됨" << endl;
	}
	
	MyClass(int a)//매개변수가 다르면 여러개의 생성자를 만들 수 있다.
	{
		cout << "MyClass(int a) 호출됨" << endl;
	}
	
	~MyClass()	// 
	{
		cout << "~MyClass() 호출됨" << endl;
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
	int number_ = 0; // 초기값
};

int main3()
{
	//MyClass를 마치 자료형인 것처럼
	MyClass my_class1;
	MyClass my_class2(123);

	my_class1.Print();
	my_class2.Print();

	my_class1.Add(1);
	my_class1.Print();

	return 0;
}
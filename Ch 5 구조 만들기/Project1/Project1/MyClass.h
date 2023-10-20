#ifndef MY_CLASS_H //여러 군데에서 사용이 될 떄 컴파일을 한번만 해라.
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
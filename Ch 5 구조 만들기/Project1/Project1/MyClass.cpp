#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass()
{
	cout << "MyClass()" << endl;
}

MyClass::MyClass(int number)
{
	cout << "MyClass(int number)" << endl;
}

MyClass::~MyClass()
{
	cout << "~MyClass()" << endl;
}

void MyClass::Increment(int a)
{
	number_ += a;
}

void MyClass::Decrement(int a)
{
	number_ -= a;
}

void MyClass::Print()
{
	cout << number_ << endl;
}
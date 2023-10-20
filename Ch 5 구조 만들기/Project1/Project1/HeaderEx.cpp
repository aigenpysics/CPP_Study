#include <iostream>
#include <cstring>

#include "MyClass.h"
using namespace std;

int main()
{
	MyClass cls1;
	MyClass cls2(123);

	cls1.Print();
	cls2.Print();

	cls1.Increment(1);
	cls1.Print();

	cls2.Decrement(123);
	cls2.Print();

	return 0;
}
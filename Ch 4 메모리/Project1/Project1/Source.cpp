#include <iostream>
using namespace std;

int main2()
{
	int a = 123;
	//a라는 변수가 차지하는 공간에 123이라는 값을 넣어주겠다.

	//&, 주소 연산자
	//a의 메모리에 접근하여 값을 출력한다.
	//&, 메모리 즉 주소 값 자체를 출력
	cout << a << " " << &a << endl;

	int* b = &a;					//b에 a의 주소를 대입함.
	cout << b << " " << *b << endl; // *b는 b의 주소에 가서 저장된 값을 출력 즉 123

	*b = 567;
	cout << a << endl;	//주솟값의 값을 바꿔줄 수도 있다.

	double* c = 0;
	cout << sizeof(int) << " " << sizeof(double) << endl;   //4 8
	cout << sizeof(int* ) << " " << sizeof(double*) << endl;//8 8
	//집이 옆집보다 크더라도 집 주소의 길이가 더 크지는 않다.
	//즉 주소 자체의 크기는 동일하다.
	cout << sizeof(a) << " " << sizeof(b) << endl;			//4 8

	/*주솟값 자체는 의미없다.*/
	//size_t -> 10진수로 반환
	cout << b << " " << sizeof(b) << endl;
	cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
	cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

	/*포인터와 배열*/
	int my_arr[] = { 23,38,56,69,74 };
	char my_str[] = { 'h','e','l','l','o','\n' };
	char* my_ptr = my_str;	//배열의 이름은 포인터

	cout << *(my_ptr + 1) << endl;
	//인덱싱을 해주는 것은 내부적으로 나열된 메모리 공간에서 처음으로부터 얼마나 떨어져있는지를 가지고 특정한 메모리에 접근하는 것이다.
	return 0;
}
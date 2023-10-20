#include <iostream>
using namespace std;

//함수는 a,b라는 두 정수형 자료형을 입력받고 int 자료형의 값을 반환한다.
int Add(int a, int b) 
{
	return a + b; 
}

//이 함수는 a,b라는 두 정수형 자료형과 c라는 포인터 정수형 자료형을 입력받고 아무런 값도 반환하지 않는다.
void Add(int a, int b, int* c, int* d)
{
	//c라는 메모리 공간의 a+b를 저장했다. 반환값은 없지만 c가 가르키는 주소의 값에 a+b가 저장되어 함수 호출 이후에 c를 호출하면 
	//a + b의 값이 출력된다.
	//반환값은 하나밖에 고르지 못하기 떄문에 여러개를 반환하고 싶다면 포인터 변수를 여러개 입력받으면 된다.
	*c = a + b;	
	*d = b - a;
}
//매개변수 즉 입력되는 자료형이 다르다면 이름이 똑같은 함수를 여러개 만들 수 있다. 다만 main같은 특별한 기능을 하는 함수들은 불가하다.

int main3()
{
	int sum;
	int minus;
	Add(4, 5, &sum, &minus);

	cout << sum << endl;

	return 0;
}
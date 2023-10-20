#include <iostream>

using namespace std;

int main()
{
	// 변수의 자료형을 사용 전에 선언해줘야 한다.(assginment)
	// 선언된 자료형은 바꿀 수 없다. 
	// 미리 할당하는 이유는 메모리를 확보해두기 위해서이다.

	//변수 선언
	int i; 
	i = 123;

	//선언과 동시에 값 대입도 가능함 (c에서는 불가능)
	int j = 123; 

	//sizeof 소개
	cout << i << "가 차지하는 용량은 :" << sizeof(i) << endl;
	//123가 차지하는 용량은 :4 
	//어떤 변수나 자료형의 크기를 알려주는 연산자

	//부동소수점 자료형 
	float f = 3.141f;	//마지막 f를 붙여야 함.
	double d = 3.141;	// f 불필요
						// double이 정밀도가 더 높음 

	//문자 (charter) 와 문자열 (string)
	char c = 'a';		
	char str[] = "Hello World"; // []은 array 즉 글자 여러개를 만들 수 있는 공간을 확보해놔라
	
	//형변환(casting)
	i = 3.64;	// double을 int에 강제로 저장

	cout << "int from double" << i << endl;
	// 3이 출력됨 cf) 반올림은 되지 않는다.

	f = 567.89; // double을 float에 강제로 저장


	//기본 연산자
	i += 100; // i = i + 100
	i++;      // i = i + 1


	//불리언 연산자
	bool b = true;
	bool b2 = false;

	cout << b2 << endl;				   //0, 내부적으로 false는 0, true는 1
	cout << boolalpha << true << endl; //true
	cout << b2 << endl;				   //false, boolaplha를 한번만 지정하면 이후는 지정안해도 적용됨.
	cout << noboolalpha << b2 << endl; //0


	//scope(영역)
	i = 123;
	{
		int i = 345;		//더 좁은 영역의 다른 변수 i
		cout << i << endl;	//345
	}

	cout << i << endl;		//123
	
	return 0;

}
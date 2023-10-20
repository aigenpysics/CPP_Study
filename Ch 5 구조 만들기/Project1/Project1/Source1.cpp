#include <iostream>
#include <cstring>
using namespace std;

//MyStruct라는 자료형을 만든 것과 유사함.
struct MyStruct
{
	int first;
	int second;
	// ... 추가 가능

	//구조체 안에 정의된 함수
	int Add() 
	{
		return first + second;
	}
};

int main2()
{
	MyStruct a; //자료형 선언처럼 사용
	a.first = 123; //.을 찍으면 구조체 안의 있는 변수들에 접근 가능
	a.second = 456;
	
	//맴버 함수 호출
	cout << a.Add() << endl;

	//구조체 포인터
	MyStruct* ptr_a = &a;

	//포인터가 맴버 변수에 접근할 때는 -> 를 사용한다.
	cout << ptr_a->first << " " << ptr_a->second << " " << ptr_a->Add() << endl;

	//포인터로 값 변경
	ptr_a->first = -6;	//멤버 변수 first의 값 변경

	//구조체 배열
	MyStruct MyArr[10];
	for (int i = 0; i < 10; i++) {
		MyArr[i].first = i;
		MyArr[i].second = i * 10;
	}

	for (int j = 0; j < 10; j++) {
		cout << MyArr[j].Add() << " ";
		//0 11 22 33 44 55 66 77 88 99
	}
	return 0;
}
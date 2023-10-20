#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	//배열 선언 및 초기화
	int my_arr[3] = { 1,2,3 };

	//인덱싱
	cout << my_arr[0] << " " << my_arr[1] << " " << my_arr[2] << endl;

	my_arr[1] = 5; 

	//문자열은 기본적으로 배열
	char name[75] = "Hello World"; //null charter

	cout << name << " " << sizeof(name) << endl;

	name[2] = '\0';
	cout << name << " " << sizeof(name) << endl;
	//He 75, cout -> null charter를 만나면 멈춘다.


	//백지 수표
	char name[] = 'I can write whatever i want.';

	//null char를 지우면 어떻게 될까?
	char name[12] = "Hello World";
	name[12] = '!';
	cout << name << " " << sizeof(name) << endl;
	//Severity	Code	Description	Project	File	Line	Suppression State
	//rror	C2015	too many characters in constant	


	return 0;
}


#include <iostream>
using namespace std;


int Min(int a, int b)
{
	return a < b ? a : b;	// 삼항 연산자
}

int main(void)
{
	// 문자열 복사
	const int kMaxStr = 100;
	char str1[] = "Hello World";
	char str2[kMaxStr];

	// str2 = str1; Error 발생
	memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
	// str1의 메모리에 시작부터 3번쨰 인수의 값만큼을 str2의 메모리 주소로 옮겨라
	cout << str2 << endl; //hello World
	
	//str1, str2 이 두 배열은 정적배열이다. 크기를 중간에 바꿀 수 없다는 뜻이다.
	/*동적할당*/
	//new 키워드를 통해 운영체제에게 내가 이정도의 메모리가 필요하다를 요구
	//이후 반납을 해야함
	char* dynamic_arr = new char[kMaxStr];

	memcpy(dynamic_arr, str1, Min(sizeof(dynamic_arr), sizeof(str2)));
	cout << dynamic_arr << endl;

	cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_arr);
	//재할당
	//dynamic_arr = new char[100];
	delete[] dynamic_arr; // 배열 삭제 or 반환
}
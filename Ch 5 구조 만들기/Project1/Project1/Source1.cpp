#include <iostream>
#include <cstring>
using namespace std;

//MyStruct��� �ڷ����� ���� �Ͱ� ������.
struct MyStruct
{
	int first;
	int second;
	// ... �߰� ����

	//����ü �ȿ� ���ǵ� �Լ�
	int Add() 
	{
		return first + second;
	}
};

int main2()
{
	MyStruct a; //�ڷ��� ����ó�� ���
	a.first = 123; //.�� ������ ����ü ���� �ִ� �����鿡 ���� ����
	a.second = 456;
	
	//�ɹ� �Լ� ȣ��
	cout << a.Add() << endl;

	//����ü ������
	MyStruct* ptr_a = &a;

	//�����Ͱ� �ɹ� ������ ������ ���� -> �� ����Ѵ�.
	cout << ptr_a->first << " " << ptr_a->second << " " << ptr_a->Add() << endl;

	//�����ͷ� �� ����
	ptr_a->first = -6;	//��� ���� first�� �� ����

	//����ü �迭
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
#include <iostream>

using namespace std;

int main()
{
	// ������ �ڷ����� ��� ���� ��������� �Ѵ�.(assginment)
	// ����� �ڷ����� �ٲ� �� ����. 
	// �̸� �Ҵ��ϴ� ������ �޸𸮸� Ȯ���صα� ���ؼ��̴�.

	//���� ����
	int i; 
	i = 123;

	//����� ���ÿ� �� ���Ե� ������ (c������ �Ұ���)
	int j = 123; 

	//sizeof �Ұ�
	cout << i << "�� �����ϴ� �뷮�� :" << sizeof(i) << endl;
	//123�� �����ϴ� �뷮�� :4 
	//� ������ �ڷ����� ũ�⸦ �˷��ִ� ������

	//�ε��Ҽ��� �ڷ��� 
	float f = 3.141f;	//������ f�� �ٿ��� ��.
	double d = 3.141;	// f ���ʿ�
						// double�� ���е��� �� ���� 

	//���� (charter) �� ���ڿ� (string)
	char c = 'a';		
	char str[] = "Hello World"; // []�� array �� ���� �������� ���� �� �ִ� ������ Ȯ���س���
	
	//����ȯ(casting)
	i = 3.64;	// double�� int�� ������ ����

	cout << "int from double" << i << endl;
	// 3�� ��µ� cf) �ݿø��� ���� �ʴ´�.

	f = 567.89; // double�� float�� ������ ����


	//�⺻ ������
	i += 100; // i = i + 100
	i++;      // i = i + 1


	//�Ҹ��� ������
	bool b = true;
	bool b2 = false;

	cout << b2 << endl;				   //0, ���������� false�� 0, true�� 1
	cout << boolalpha << true << endl; //true
	cout << b2 << endl;				   //false, boolaplha�� �ѹ��� �����ϸ� ���Ĵ� �������ص� �����.
	cout << noboolalpha << b2 << endl; //0


	//scope(����)
	i = 123;
	{
		int i = 345;		//�� ���� ������ �ٸ� ���� i
		cout << i << endl;	//345
	}

	cout << i << endl;		//123
	
	return 0;

}
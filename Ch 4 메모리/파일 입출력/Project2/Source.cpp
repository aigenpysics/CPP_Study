#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	//���� ���
	{
		ofstream ofile; //Output File Stream
		ofile.open("my_txt.txt");
		ofile << "����.\n";
		ofile << "�ݰ��� \n";
		ofile << "�ż����� ���� �Ǵ°Ŵ�.\n";
		ofile << "���̷� ����\n";
		ofile.close();
	}

	//���� �Է�
	{
		char line[100];	//���� ���� �о���ٵ� �ӽ÷� ������ ����
		
		ifstream ifile;	//input File Stream
		ifile.open("my_txt.txt");
		
		int line_num = 0;
		while (ifile.getline(line, sizeof(line)))
		{
			cout << line_num + 1 << "��° �� : ";
			cout << line << endl;

			line_num++;
		}
		ifile.close();
	}
}
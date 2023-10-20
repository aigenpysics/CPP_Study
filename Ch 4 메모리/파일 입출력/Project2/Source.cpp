#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	//파일 출력
	{
		ofstream ofile; //Output File Stream
		ofile.open("my_txt.txt");
		ofile << "나다.\n";
		ofile << "반갑고 \n";
		ofile << "신세계의 신이 되는거다.\n";
		ofile << "막이래 ㅋㅋ\n";
		ofile.close();
	}

	//파일 입력
	{
		char line[100];	//한줄 한줄 읽어올텐데 임시로 저장할 변수
		
		ifstream ifile;	//input File Stream
		ifile.open("my_txt.txt");
		
		int line_num = 0;
		while (ifile.getline(line, sizeof(line)))
		{
			cout << line_num + 1 << "번째 줄 : ";
			cout << line << endl;

			line_num++;
		}
		ifile.close();
	}
}
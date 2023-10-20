#include <iostream>
#include <cstring>
//using namespace std;
//class MyString
//{
//public:
//	MyString(const char* init_str)
//	{
//		cout << "MyString(const char* init_str)" << endl;
//		//글자 수 확인
//		size_ = 0; 
//		while (init_str[size_] != '\0')
//		{
//			size_++;
//		}
//		//글자 수가 0이 아니면 메모리 할당
//		if (size_ > 0)
//		{
//			str_ = new char[size_]; 
//		}
//		// 복사
//		for (int i = 0; i < size_; i++)
//		{
//			str_[i] = init_str[i];
//		}
//	}
//	~MyString()
//	{
//		cout << "Destructor" << endl;
//		size_ = 0;
//		if (str_)
//			delete[] str_;
//	}
//
//	void Resize(int new_size)
//	{
//		char* new_str = new char[new_size];
//
//		for (int i = 0; i < (new_size < size_ ? new_size : size_); i++)
//		{
//			new_str[i] = str_[i];
//		}
//
//		delete[] str_;
//		str_ = new_str;
//		size_ = new_size;
//	}
//
//	void Print()
//	{
//		for (int i = 0; i < size_; i++)
//		{
//			cout << str_[i];
//		}
//		cout << endl;
//	}
//	
//	int Min(int a, int b)
//	{
//		return a < b ? a : b;
//	}
//	void Append(MyString* app_str)
//	{
//		int old_size = size_;
//		Resize(old_size + app_str->size_);
//		for (int i = 0; i < size_; i++)
//		{
//			str_[old_size + i] = app_str->str_[i];
//			//cout << add_str[i];
//		}
//	}
//private:
//	int size_ = 0;
//	char* str_ = nullptr;
//};
//
//int main4()
//{
//	//MyString str1("ABCDE");
//	//MyString str2("123");
//
//	//str1.Print();
//	//str1.Append(&str2);
//	//str1.Print();
//	//exit(-1);	//강제 종료
//	//str1.Append(&str2);
//	//str1.Print();
//
//	return 0;
//}
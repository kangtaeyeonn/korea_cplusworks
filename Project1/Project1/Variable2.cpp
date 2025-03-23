//#include <iostream>
//#include <string> //string 자료형 사용
//using namespace std;
////이름 공간(소속)을 std로 사용함
//
//int main()
//{
//	//문자형 변수 선언 및 초기화 - char, string
//	char ch1 = 'A';
//	//char ch2 = 65; //아스키코드 'A'에 해당됨
//	int ch2 = 65;
//	char ch3 = '\n'; //줄바꿈 문자이이므로 안보임
//	char ch4[] = "나"; //문자열 끝에 널(NULL)문자 '\0' 포함
//
//	cout << ch1 << endl;
//	cout << ch2 << endl;
//	cout << ch3 << endl;
//	cout << "자료형의 크기: " << sizeof(ch1) << "byte" << endl;
//	cout << "자료형의 크기: " << sizeof(ch4) << "byte" << endl;
//	cout << "================================\n";
//
//	//문자열(C++에서 추가된 자료형 - string)
//	string s1 = "banana";
//	//char s1[] = "banana";
//	string s2 = "파인애플";
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << "자료형의 크기: " << sizeof(s1) << "byte" << endl;
//	cout << "자료형의 크기: " << sizeof(s2) << "byte" << endl;
//	cout << "문자열의 크기: " << size(s1) << "byte" << endl;
//	cout << "문자열의 크기: " << size(s2) << "byte" << endl;
//
//
//
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
///*
//	키 반복 동작
//	'y' or 'Y' 키를 누르면 "계속 반복"
//	'n'or 'N' 키를 누르면 "반복 중단"
//	그 이외의 키는 "잘못된 입력"
//
//	비교 구문 문자열 함수 - comapare()
//*/
//
//int main()
//{
//	string key; //입력 키 변수
//	
//	while (1)
//	{
//		cout << "계속 반복할까요(y/n)? ";
//		cin >> key;
//
//
//		if (key.compare("y") == 0 || key.compare("Y") == 0)
//		{
//			cout << "계속 반복\n";
//		}
//		else if (key.compare("n") == 0 || key.compare("N") == 0)
//		{
//			cout << "반복 중단!\n";
//			break; //반복문 탈출
//		}
//		else
//		{
//			cout << "잘못된 입력입니다. 다시 입력하세요!\n";
//		}
//	}
//
//	return 0;
//}
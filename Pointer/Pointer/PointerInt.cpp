//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//정수형 변수 선언과 초기화
//	//직접 참조(메모리)
//	int n = 10;
//
//	cout << n << endl;
//	cout << &n << endl;
//
//	//정수형 포인터 선언과 초기화
//	//간접 참조(메모리)
//	int* pn = &n;
//
//	cout << pn << endl; //변수의 n의 주소값
//	cout << *pn << endl; //변수 n의 값을 가리킴(역참조)
//
//	//역참조 연산
//	*pn = *pn + 10;
//	cout << *pn << endl;
//
//	//정수형 포인터 ptr 선언
//	//정적포인터
//	int num = 1;
//	int* ptr;
//	ptr = &num;
//
//	cout << *ptr << endl; //1
//
//	*ptr = 100;
//	cout << *ptr << endl; //100
//
//	return 0;
//}
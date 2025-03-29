//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//정수형 배열 선언과 초기화
//	int a[4] = { 10, 20, 30, 40 };
//
//	cout << a[0] << endl;
//	cout << &a[0] << endl;
//	cout << a << endl; //배열 이름이 시작 주소이다
//
//	//정수형 포인터 배열
//	int* pa;
//	pa = a; //&a[0]
//
//	cout << pa << endl;
//	cout << *pa << endl; // 10, *(pa + 0) -> 0번 주소에 있는 값
//	cout << *(pa + 1) << endl; // 20, *(pa + 1) -> 1번 주소에 있는 값
//	cout << "===================================\n";
//
//	//전체 출력 - 포인터 역참조로 배열 값을 검색(조회)함
//	for (int i = 0; i < size(a); i++)
//	{
//		cout << *(pa + i) << endl;
//	}
//
//
//	return 0;
//}
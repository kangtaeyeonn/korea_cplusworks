//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//비교 연산 - 결과값(1/0)
//	int a = 99;
//	int b = 9;
//
//	cout << "(a == b): " << (a == b) << endl; //0
//	cout << "(a != b): " << (a != b) << endl; //1
//	cout << "(a >= b): " << (a >= b) << endl; //1
//	cout << "(a <= b): " << (a <= b) << endl; //0
//
//
//	//논리 연산 - (&&, ||, !)
//	//&& - 두 조건이상에서 모두 참일때만 참
//	//|| - 두 조건중 하나만 참이어도 참
//	//! - 한 조건이 참이면 거짓이고, 거짓이면 참
//	cout << "(a == b) && (a > b): " << ((a == b) && (a > b)) << endl; //0
//	cout << "(a == b) || (a > b): " << ((a == b) || (a > b)) << endl; //1
//	cout << "!(a > b): " << !(a > b) << endl; //0
//
//	//조건 연산 (조건식 ? "참" : "거짓")
//	int fatherAge = 47;
//	int motherAge = 50;
//	char result1;
//	string result2;
//
//	result1 = (fatherAge > motherAge) ? 'T' : 'F';
//	result2 = (fatherAge > motherAge) ? "참" : "거짓";
//
//	cout << "결과1: " << result1 << endl;
//	cout << "결과2: " << result2 << endl;
//
// 
//
//	return 0;
//}
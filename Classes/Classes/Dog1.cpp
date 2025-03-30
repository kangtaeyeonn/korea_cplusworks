//#include <iostream>
//#include <string>
//using namespace std;
//
//////클래스
////	-객체(사물)를 추상화한 자료형(Data type)이다.
////	-class 키워드 사용
////	-멤버변수와 멤버 함수로 구성됨
//// - public: 외부에서 접근 가능
//// - private: 외부에서 접근 불가(내부는 접근 가능)
//class Dog {
//public: //접근제어자
//	string type; //종류
//	int age; //나이
//
////멤버 함수
//	void dogInfo() {
//		cout << "강아지 종류: " << type << endl;
//		cout << "강아지 나이: " << age << "세" << endl;
//	}
//
//	void bark() {
//		cout << "멍멍\n";
//	}
//};
//
//
//int main()
//{
//	//클래스의 사용
//	Dog dog1; //dog1 - 인스턴스(생성된 객체)
//	dog1.type = "푸들";
//	dog1.age = 5;
//
//	dog1.dogInfo();
//	dog1.bark();
//
//
//	Dog dog2; //dog1 - 인스턴스(생성된 객체)
//	dog2.type = "비숑";
//	dog2.age = 4;
//	dog2.dogInfo();
//	dog2.bark();
//
//	return 0;
//}
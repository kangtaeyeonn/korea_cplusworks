#include <iostream>
#include <string>
using namespace std;

//구조체 - 여러가지 자료형을 그룹화 함
struct Student {
	string name; //이름
	int grade; //학년
	string address; //주소
};

int main()
{
	//구조체 사용 - 구조체 변수 생성
	//점(.) 연산자로 접근
	Student st = Student();
	st.name = "이우주";
	st.grade = 3;
	st.address = "서울시 노원구 상계동";

	cout << "학생 이름: " << st.name << endl;
	cout << "학년: " << st.grade << endl;
	cout << "주소: " << st.address << endl;


	return 0;
}
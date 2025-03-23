//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//자동 형변환(묵시적 형변환)
//	//정수형 자료형의 크기 int(4) < float(4) < double(8)
//	int iNum = 20;
//	float fNum = 0.9F; //'f', 'F'를 붙임
//
//	cout << iNum << ' ' << fNum << endl;
//	cout << iNum + fNum << endl;
//
//	//강제 형변환(명시적 형변환)
//	//(자료형)을 명시함
//	double dNum = 1.2;
//	int iNum2, iNum3;
//
//	iNum2 = (int)(dNum + fNum); // (1.2+0.9) -> 2
//	cout << iNum2 << endl;
//
//	iNum3 = (int)dNum + (int)fNum; // 1 + 0 -> 1
//	cout << iNum3 << endl;
//
//	return 0;
//}
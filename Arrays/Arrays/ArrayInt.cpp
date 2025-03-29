//#include <iostream>
//using namespace std;
//
//int main()
//{
//	////정수형 배열 선언
//	//int arr[3];
//
//	////저장
//	//arr[0] = 70;
//	//arr[1] = 80;
//	//arr[2] = 90;
//
//	//배열의 선언과 동시에 초기화
//	int arr[3] = { 70, 75, 87 };
//	int sum = 0; //합계
//
//	//배열의 크기
//	cout << size(arr) << endl;
//
//	//요소의 수정
//	arr[0] = 91;
//
//	//전체 출력
//	for (int i = 0; i < size(arr); i++)
//	{
//		cout << arr[i] << endl;
//	}
//	
//	//요소의 합계
//	for (int i = 0; i < size(arr); i++)
//	{
//		sum += arr[i];
//	}
//	cout << "합계: " << sum << endl;
//
//	//소수점 자리수 설정
//	cout << fixed;
//	cout.precision(2);
//	cout << "평균: " << (double)sum / size(arr) << endl;
//
//
//
//	return 0;
//}
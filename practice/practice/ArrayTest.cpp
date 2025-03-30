#include <iostream>
using namespace std;

/*
	배열 길이가 5인 정수배열을 선언하고, 1~10중 홀수만을 배열에 저장한
	후 그 합과 평균을 계산하시오. [평균은 실수형 자료형을 사용함]
*/


int main()
{
	int arr[5] = { 1, 3, 5, 7, 9 };

	int total = 0; //합
	double avg; //평균

	//총합 계산
	for (int i = 0; i < size(arr); i++)
	{
		total += arr[i];
	}
	cout << "총합 : " << total << endl;

	//평균계산
	avg = total / (double)size(arr);
	cout << "평균 : " << avg << endl;

	return 0;
}
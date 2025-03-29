#include <iostream>
using namespace std;

int main()
{
	//정수형 배열 선언
	int number[] = { 11, 55, 78, 46, 23 };

	//최대값 구하기
	int max = number[0]; //11

	for (int i = 1; i < size(number); i++)
	{
		if (number[i] > max)
		{
			max = number[i];
		}
	}

	cout << "최대값: " << max << endl;

	//최소값 계산하기
	int min = number[0];

	for (int i = 1; i < size(number); i++)
	{
		if (number[i] < min)
		{
			min = number[i];
		}
	}

	cout << "최소값: " << min << endl;

	return 0;
}
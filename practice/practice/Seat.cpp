#include <iostream>
using namespace std;

int main()
{
	/*
	입장 객수에 따른 좌석줄 수를 계산하는 프로그램(조건문)
	- 입장객 수 / 좌석 열 수
		1. 나누어 떨어지는 경우
		2. 나누어 떨어지지 않는 경우(1줄 더 필요)
	*/

	int customer;
	int column;
	int row;

	cout << "입장객 수를 입력: ";
	cin >> customer;
	cout << "좌석 열 수 입력: ";
	cin >> column;
	
	if (customer % column == 0)
	{
		row = customer / column;
		//cout << row << endl;
	}
	else
	{
		row = (int)(customer / column) + 1;
		//cout << row << endl;
	}
	
	cout << row << "개의 줄이 더 필요합니다." << endl;



	return 0;
}
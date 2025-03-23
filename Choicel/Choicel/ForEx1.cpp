#include <iostream>
#include <string>
using namespace std;
/*
	for 반복문
	for(초기값; 종료값; 증감값)
	{
		실행문
	}
*/

int main()
{
	// 1 ~ 10까지 출력
	for (int n = 1; n <= 10; n++)
	{
		cout << n << " ";
	}
	cout << "\n=================================\n";

	// 1 ~ 10까지 합계 출력
	int sum = 0;
	for (int n = 1; n <= 10; n++)
	{
		sum += n;
		cout << "n=" << n << ", sum= " << sum << endl;
	}
	cout << endl;
	cout << "합계 " << sum << endl;



	return 0;
}
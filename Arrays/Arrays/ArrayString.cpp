#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 문자열 배열 관리
	/*string cart = "라면";
	cout << cart << endl;*/

	string carts[] = { "라면", "빵", "화장지", "생수" };

	//배열의 크기
	cout << size(carts) << endl;

	//특정 요소 검색
	cout << carts[2] << endl;

	//전체 요소 검색
	for (int i = 0; i < size(carts); i++)
	{
		cout << carts[i] << " ";
	}

	return 0;
}
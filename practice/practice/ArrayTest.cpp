#include <iostream>
using namespace std;

/*
	�迭 ���̰� 5�� �����迭�� �����ϰ�, 1~10�� Ȧ������ �迭�� ������
	�� �� �հ� ����� ����Ͻÿ�. [����� �Ǽ��� �ڷ����� �����]
*/


int main()
{
	int arr[5] = { 1, 3, 5, 7, 9 };

	int total = 0; //��
	double avg; //���

	//���� ���
	for (int i = 0; i < size(arr); i++)
	{
		total += arr[i];
	}
	cout << "���� : " << total << endl;

	//��հ��
	avg = total / (double)size(arr);
	cout << "��� : " << avg << endl;

	return 0;
}
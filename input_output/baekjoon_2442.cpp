#include <iostream>
using namespace std;

/*
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 3��, ..., N��° �ٿ��� �� 2��N-1���� ��� ����
���� ����� �������� ��Ī�̾�� �Ѵ�.
*/

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) // num�� ����ŭ ���� ���
	{
		for (int j = 1; j <= num - i; j++) // ���� ���
		{
			cout << " ";
		}
		for (int j = 1; j <= i * 2 - 1; j++) // �� ���
		{
			cout << "*";
		}

		// ���� ������ ����ϸ� �ȵȴ�.

		cout << endl;
	}

	return 0;


}
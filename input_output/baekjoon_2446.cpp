#include <iostream>

using namespace std;

// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

int main()
{
	int num;

	cin >> num;

	// �� �κ� ( �� �ϳ��� �κб���)
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++) // ���� ���
			cout << " ";

		for (int j = 0; j < 2 * (num - i) - 1; j++) // �� ���
			cout << "*";

		cout << endl;
	}

	// �Ʒ� �κ�
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 2; j++) // ���� ���
			cout << " ";

		for (int j = 0; j < 2 * (i + 2) - 1; j++) // �� ���
			cout << "*";

		cout << endl;
	}
	

	return 0;
}
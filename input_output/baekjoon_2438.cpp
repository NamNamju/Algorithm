#include <iostream>
using namespace std;

// ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

int main() {

	int num;

	cin >> num; // N��

	for (int i = 0; i < num; i++) { // 0��° �ٺ��� (num - 1)��° �� ����
		for (int j = 0; j <= i; j++) { // 0��° ���� 1��, 1��° ���� 2�� ... (num - 1)��° ���� num��
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
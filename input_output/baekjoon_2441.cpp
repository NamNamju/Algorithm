#include <iostream>
using namespace std;

/*
ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
*/

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) { // �� num��ŭ�� �� ���� ���
		for (int j = 1; j <= num; j++) { // 1���� num����
			if (j <= i) cout << " "; // ���� j�� i ���� �۴ٸ� ���� ���
			else cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
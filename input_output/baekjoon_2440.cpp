#include <iostream>
using namespace std;

// ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����

int main() {
	int num;

	cin >> num;

	for (int i = num; i > 0; i--) { // �� num�� ����ŭ ���� ���.
		for (int j = i; j > 0; j--) { // i��ŭ ���.
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
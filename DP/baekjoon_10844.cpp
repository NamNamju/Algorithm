#include <iostream>
using namespace std;

// N�� �־��� ��, ���̰� N�� ��� ���� �� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ���� ����

int main() {
	int num;
	long long sum = 0;
	long long arr[101][10] = { 0, }; // �ʱ�ȭ�� ���� �ʾƼ� ���������� ���� �߻�

	cin >> num;

	for (int i = 1; i < 10; i++) {
		arr[1][i] = 1; // n = 1 �� ��� �ʱⰪ
	}

	for (int i = 2; i <= num; i++) { // i = ����
		for (int j = 0; j < 10; j++) { // j = ���� �� ���ڸ�
			if (j == 0) arr[i][j] = arr[i - 1][j + 1] % 1000000000; // ���ڸ��� 0�� ��� ���� ���� 1�̾�� ��.
			else if (j == 9) arr[i][j] = arr[i - 1][j - 1] % 1000000000; // ���ڸ��� 9�� ��� ���� ���� 8�̾�� ��.
			else arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}
	for (int i = 0; i < 10; i++) {
		sum += arr[num][i];
	}

	cout << sum % 1000000000;

	return 0;
	
}
#include <iostream>
using namespace std;

// 3��N ũ���� ���� 2��1, 1��2 ũ���� Ÿ�Ϸ� ä��� ����� ���� ���غ���.

int main() {

	int Dp[31] = {};
	int result[31] = {}; // �� ����
	int num;
	Dp[0] = 1;    
	result[0] = 1;
	Dp[2] = 3;

	for (int i = 4; i <= 30; i += 2)
		Dp[i] = 2; // �����ϰ� ���� �� �ִ� ��

	cin >> num;

	for (int i = 2; i <= num; i += 2) {
		for (int j = 2; j <= i; j += 2) {
			result[i] += Dp[j] * result[i - j]; // ������ ������ ���Ӱ� ����� ��

		}
	}

	cout << result[num];

	return 0;
}

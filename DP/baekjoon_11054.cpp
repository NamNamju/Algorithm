#include <iostream>
using namespace std;

// ���� A�� �־����� ��, �� ������ �κ� ���� �� ������� �����̸鼭 ���� �� ������ ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int A[1010] = {}; // ���� �Է¹޴� �迭
	int Dp[2][1010] = {};
	// Dp[i]�� ��� A[i] �� ���� �ִ� ���� �� A[i]���� ���� ���� �� ������ üũ�ϰ�, �װ��� Dp[i]�� ����.

	int max = 0;

	cin >> num;

	for (int i = 1; i <= num; i++)
		cin >> A[i]; // �Է¹���.

	for (int i = 1; i <= num; i++)
	{
		int min = 0; // A[i] �� �� ���� ���� ������ ����.
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				if (min < Dp[0][j])
					min = Dp[0][j];
			}
		}
		Dp[0][i] = min + 1;
		if (max < Dp[0][i])
			max = Dp[0][i]; // ���� ������ ������ ���� �ִ�ġ�� ��츦 ����
	}

	for (int i = num; i >=1; i--)
	{
		int min = 0; // A[i] �� �� ���� ���� ������ ����.
		for (int j = num; j > i; j--) {
			if (A[i] > A[j]) {
				if (min < Dp[1][j])
					min = Dp[1][j];
			}
		}
		Dp[1][i] = min + 1;
		if (max < Dp[1][i])
			max = Dp[1][i]; // ���� ������ ������ ���� �ִ�ġ�� ��츦 ����
	}

	for (int i = 1; i <= num; i++) {
		if (max < Dp[0][i] + Dp[1][i])
			max = Dp[0][i] + Dp[1][i];
	}

	cout << max-1;

	return 0;

}

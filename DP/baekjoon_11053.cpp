#include <iostream>
using namespace std;

// ���� A�� �־����� ��, ���� �� �����ϴ� �κ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int A[1010] = {}; // ���� �Է¹޴� �迭
	int Dp[1010] = {};
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
				if (min < Dp[j])
					min = Dp[j];
			}
		}
		Dp[i] = min + 1;
		if (max < Dp[i])
			max = Dp[i]; // ���� ������ ������ ���� �ִ�ġ�� ��츦 ����
	}

	cout << max;

	return 0;

}

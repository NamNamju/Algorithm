#include <iostream>
using namespace std;

// ���� A�� �־����� ��, ���� �� �����ϴ� �κ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int Dp[1010] = {};
	int A[1010] = {};
	int max = 0;
	
	cin >> num;

	for (int i = 1; i <= num; i++)
		cin >> A[i]; // �Է¹���.

	for (int i = 1; i <= num; i++)
	{
		int min = 0;
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				if (min < Dp[j])
					min = Dp[j];
			}
		}
		Dp[i] = min + 1;
		if (max < Dp[i])
			max = Dp[i];
	}

	cout << max;

	return 0;

}

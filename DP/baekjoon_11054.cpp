#include <iostream>
using namespace std;

// 수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int A[1010] = {}; // 수를 입력받는 배열
	int Dp[2][1010] = {};
	// Dp[i]일 경우 A[i] 의 전에 있는 수들 중 A[i]보다 작은 수가 몇 개인지 체크하고, 그것을 Dp[i]에 저장.

	int max = 0;

	cin >> num;

	for (int i = 1; i <= num; i++)
		cin >> A[i]; // 입력받음.

	for (int i = 1; i <= num; i++)
	{
		int min = 0; // A[i] 일 때 작은 수의 개수를 저장.
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				if (min < Dp[0][j])
					min = Dp[0][j];
			}
		}
		Dp[0][i] = min + 1;
		if (max < Dp[0][i])
			max = Dp[0][i]; // 작은 수들의 개수가 가장 최대치인 경우를 저장
	}

	for (int i = num; i >=1; i--)
	{
		int min = 0; // A[i] 일 때 작은 수의 개수를 저장.
		for (int j = num; j > i; j--) {
			if (A[i] > A[j]) {
				if (min < Dp[1][j])
					min = Dp[1][j];
			}
		}
		Dp[1][i] = min + 1;
		if (max < Dp[1][i])
			max = Dp[1][i]; // 작은 수들의 개수가 가장 최대치인 경우를 저장
	}

	for (int i = 1; i <= num; i++) {
		if (max < Dp[0][i] + Dp[1][i])
			max = Dp[0][i] + Dp[1][i];
	}

	cout << max-1;

	return 0;

}

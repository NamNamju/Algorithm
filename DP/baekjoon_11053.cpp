#include <iostream>
using namespace std;

// 수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int A[1010] = {}; // 수를 입력받는 배열
	int Dp[1010] = {};
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
				if (min < Dp[j])
					min = Dp[j];
			}
		}
		Dp[i] = min + 1;
		if (max < Dp[i])
			max = Dp[i]; // 작은 수들의 개수가 가장 최대치인 경우를 저장
	}

	cout << max;

	return 0;

}

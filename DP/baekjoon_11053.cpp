#include <iostream>
using namespace std;

// 수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int Dp[1010] = {};
	int A[1010] = {};
	int max = 0;
	
	cin >> num;

	for (int i = 1; i <= num; i++)
		cin >> A[i]; // 입력받음.

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

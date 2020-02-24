#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// 첫째 줄에 두 정수 N(1 ≤ N ≤ 200), K(1 ≤ K ≤ 200)가 주어진다.

int main() {
	long long N, K;
	long long arr[210] = { 0, };

	cin >> N >> K; // 수를 입력받는다.

	for (long long i = 0; i <= N; i++) {
		arr[i] = 1; // 수를 1개로 나누는 방법은 자기 자신 1가지 이므로 1로 초기화해준다.
	}

	while (K > 1) {
		long long dp[210] = { 0, }; // 합을 저장할 배열을 선언. while문을 돌릴 때마다 초기화.

		for (int i = 0; i <= N; i++) {

			for (int j = 0; j <= i; j++) {
				dp[i] += arr[j]; // 합을 저장.

			}
			dp[i] %= 1000000000; // 문제대로 나눠준다.

		}

		memcpy(arr, dp, sizeof(dp)); // 배열을 복사한다.

		K--;

	}

	cout << arr[N] << endl; // 출력

	return 0;
}
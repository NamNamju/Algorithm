#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

/*
0부터 N까지의 정수 K개를 더해서 그 합이 N이 되는 경우의 수를 구하는 프로그램을 작성하시오.
덧셈의 순서가 바뀐 경우는 다른 경우로 센다(1+2와 2+1은 서로 다른 경우).
또한 한 개의 수를 여러 번 쓸 수도 있다.
*/

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
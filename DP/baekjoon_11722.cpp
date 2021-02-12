#include <iostream>
using namespace std;

// 수열 A가 주어졌을 때, 가장 긴 감소하는 부분 수열을 구하는 프로그램을 작성하시오.
// baekjoon_11053과 매우 유사한 문제. 뒤집어서 풀면 된다.

int main() {
	int arr[1002] = { 0, };
	int num;
	int dp[1002] = { 0, };
	int max = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
	}

	for (int i = num; i > 0; i--) { // 감소하는 부분수열을 구하기 때문에 거꾸로 for문을 돌린다.
		int min = 0;
		for (int j = num + 1; j > i; j--) { // j는 아무것도 없는 num+1부터 시작한다.
			if (arr[i] > arr[j]) {
				if (min < dp[j]) min = dp[j];
			}

		}

		dp[i] = min + 1;
		if (max < dp[i]) max = dp[i];
	}

	cout << max;

	return 0;
}
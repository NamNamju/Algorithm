#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

/*
0���� N������ ���� K���� ���ؼ� �� ���� N�� �Ǵ� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ ������ �ٲ� ���� �ٸ� ���� ����(1+2�� 2+1�� ���� �ٸ� ���).
���� �� ���� ���� ���� �� �� ���� �ִ�.
*/

int main() {
	long long N, K;
	long long arr[210] = { 0, };

	cin >> N >> K; // ���� �Է¹޴´�.

	for (long long i = 0; i <= N; i++) {
		arr[i] = 1; // ���� 1���� ������ ����� �ڱ� �ڽ� 1���� �̹Ƿ� 1�� �ʱ�ȭ���ش�.
	}

	while (K > 1) {
		long long dp[210] = { 0, }; // ���� ������ �迭�� ����. while���� ���� ������ �ʱ�ȭ.

		for (int i = 0; i <= N; i++) {

			for (int j = 0; j <= i; j++) {
				dp[i] += arr[j]; // ���� ����.

			}
			dp[i] %= 1000000000; // ������� �����ش�.

		}

		memcpy(arr, dp, sizeof(dp)); // �迭�� �����Ѵ�.

		K--;

	}

	cout << arr[N] << endl; // ���

	return 0;
}
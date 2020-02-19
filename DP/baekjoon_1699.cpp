#include <iostream>
#include <math.h>
using namespace std;

// 주어진 자연수 N을 이렇게 제곱수들의 합으로 표현할 때에 그 항의 최소개수를 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int a;
	int dp[100001] = { 0, };

	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= sqrt(i); j++) {
			if (dp[i] > dp[i - j * j] + 1 || dp[i] == 0)
			dp[i] = dp[i - j * j] + 1;
		}
	}
	

	cout << dp[num];

	return 0;
}
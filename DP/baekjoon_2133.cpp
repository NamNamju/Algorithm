#include <iostream>
using namespace std;

// 3×N 크기의 벽을 2×1, 1×2 크기의 타일로 채우는 경우의 수를 구해보자.

int main() {

	int Dp[31] = {};
	int result[31] = {}; // 총 개수
	int num;
	Dp[0] = 1;    
	result[0] = 1;
	Dp[2] = 3;

	for (int i = 4; i <= 30; i += 2)
		Dp[i] = 2; // 유일하게 만들 수 있는 것

	cin >> num;

	for (int i = 2; i <= num; i += 2) {
		for (int j = 2; j <= i; j += 2) {
			result[i] += Dp[j] * result[i - j]; // 과거의 것으로 새롭게 만드는 것

		}
	}

	cout << result[num];

	return 0;
}

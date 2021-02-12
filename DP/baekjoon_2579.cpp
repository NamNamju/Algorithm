#include <iostream>
#include <algorithm>
using namespace std;

// 각 계단에 쓰여 있는 점수가 주어질 때 이 게임에서 얻을 수 있는 총 점수의 최댓값을 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int arr[302] = { 0, }; // 계단에 쓰여있는 점수 저장.
	int dp[302] = { 0, }; // 최대값을 계산하여 저장.

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i]; // 입력 받음
	}

	// 초기값 설정
	dp[0] = arr[0];
	dp[1] = max(arr[0] + arr[1], arr[1]);
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);

	for (int i = 3; i < num; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]); // 점화식
	}

	cout << dp[num - 1];

	return 0;
}
#include <iostream>
using namespace std;

/* n개의 정수로 이루어진 임의의 수열이 주어진다. 
우리는 이 중 연속된 몇 개의 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하려고 한다. 단, 수는 한 개 이상 선택해야 한다.
*/

int main() {
	int num;
	long long arr[100002] = { 0, }; // 입력한 수를 저장할 배열.
	long long dp[100002] = { 0, }; // 다른 배열.

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	dp[0] = arr[0];
	long long max = dp[0]; // max의 초기값을 설정.

	for (int i = 1; i < num; i++) {

		dp[i] = dp[i - 1] + arr[i]; // dp[i]는 dp 이전의 값과 arr[i]를 더한 값.
		if (dp[i] < arr[i]) dp[i] = arr[i]; // arr[i]가 클 경우 arr[i]를 저장.

		if (max < dp[i]) max = dp[i]; // max값 바꿈.

	}

	cout << max;

	return 0;
}
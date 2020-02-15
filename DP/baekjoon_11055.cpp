#include <iostream>
using namespace std;

int main() {
	int num;
	int arr[1001] = { 0, };
	int dp[1001] = { 0, };
	int max = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> arr[i]; // 수를 입력받는다.
	}

	for (int i = 1; i <= num; i++) {
		int min = 0;

		for (int j = 0; j < i; j++) { // i번째 수보다 작은 번째들을 검사.
			if (arr[i] > arr[j]) { // arr[i]보다 작을 경우
				if (min < dp[j])
				{
					min = dp[j];
	
				}
			}
		}

		dp[i] = min + arr[i];
		
		if (max < dp[i]) max = dp[i];
		
	}

	cout << max << endl;
	return 0;
}
#include <iostream>
using namespace std;

// ���� A�� �־����� ��, �� ������ ���� �κ� ���� �߿��� ���� ���� ū ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int arr[1001] = { 0, };
	int dp[1001] = { 0, };
	int max = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> arr[i]; // ���� �Է¹޴´�.
	}

	for (int i = 1; i <= num; i++) {
		int min = 0;

		for (int j = 0; j < i; j++) { // i��° ������ ���� ��°���� �˻�.
			if (arr[i] > arr[j]) { // arr[i]���� ���� ���
				if (min < dp[j])
				{
					min = dp[j]; // min�� d[j]�� ����.
	
				}
			}
		}

		dp[i] = min + arr[i];
		
		if (max < dp[i]) max = dp[i];
		
	}

	cout << max << endl;
	return 0;
}
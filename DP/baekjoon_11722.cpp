#include <iostream>
using namespace std;

// ���� A�� �־����� ��, ���� �� �����ϴ� �κ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// baekjoon_11053�� �ſ� ������ ����. ����� Ǯ�� �ȴ�.

int main() {
	int arr[1002] = { 0, };
	int num;
	int dp[1002] = { 0, };
	int max = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> arr[i];
	}

	for (int i = num; i > 0; i--) { // �����ϴ� �κм����� ���ϱ� ������ �Ųٷ� for���� ������.
		int min = 0;
		for (int j = num + 1; j > i; j--) { // j�� �ƹ��͵� ���� num+1���� �����Ѵ�.
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
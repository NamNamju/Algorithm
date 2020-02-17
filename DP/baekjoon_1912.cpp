#include <iostream>
using namespace std;

/* n���� ������ �̷���� ������ ������ �־�����. 
�츮�� �� �� ���ӵ� �� ���� ���� �����ؼ� ���� �� �ִ� �� �� ���� ū ���� ���Ϸ��� �Ѵ�. ��, ���� �� �� �̻� �����ؾ� �Ѵ�.
*/

int main() {
	int num;
	long long arr[100002] = { 0, }; // �Է��� ���� ������ �迭.
	long long dp[100002] = { 0, }; // �ٸ� �迭.

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	dp[0] = arr[0];
	long long max = dp[0]; // max�� �ʱⰪ�� ����.

	for (int i = 1; i < num; i++) {

		dp[i] = dp[i - 1] + arr[i]; // dp[i]�� dp ������ ���� arr[i]�� ���� ��.
		if (dp[i] < arr[i]) dp[i] = arr[i]; // arr[i]�� Ŭ ��� arr[i]�� ����.

		if (max < dp[i]) max = dp[i]; // max�� �ٲ�.

	}

	cout << max;

	return 0;
}
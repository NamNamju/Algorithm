#include <iostream>
#include <algorithm>
using namespace std;

// �� ��ܿ� ���� �ִ� ������ �־��� �� �� ���ӿ��� ���� �� �ִ� �� ������ �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int arr[302] = { 0, }; // ��ܿ� �����ִ� ���� ����.
	int dp[302] = { 0, }; // �ִ밪�� ����Ͽ� ����.

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i]; // �Է� ����
	}

	// �ʱⰪ ����
	dp[0] = arr[0];
	dp[1] = max(arr[0] + arr[1], arr[1]);
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);

	for (int i = 3; i < num; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]); // ��ȭ��
	}

	cout << dp[num - 1];

	return 0;
}
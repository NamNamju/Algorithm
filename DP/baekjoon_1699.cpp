#include <iostream>
#include <math.h>
using namespace std;

// �־��� �ڿ��� N�� �̷��� ���������� ������ ǥ���� ���� �� ���� �ּҰ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
#include <iostream>
#include <math.h>
using namespace std;

// ���� ���� N�� �־����� ��, ������ ���� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� 0���� ������ �� �ִ�.
// ���� ���� �̿�

int main() {
	int num;
	long long sum = 0;
	long long arr[1001][10] = { 0, };
	
	cin >> num;
	
	for (int i = 0; i < 10; i++) { // num = 1 �� �� �ʱⰪ.
		arr[1][i] = 1;
	}

	for (int i = 2; i <= num; i++) {
		for (int j = 0; j <= 9; j++) {
			int t = j; // t�� j ����.
			while ( t < 10) {
				arr[i][j] += arr[i - 1][t] % 10007; // ���� num�� ���� ��� ����.
				t++;
			}
			
		}
	}

	for(int i = 0; i < 10; i++) {
		sum += arr[num][i] % 10007;
	}

	cout << sum % 10007;

	return 0;
}
#include  <iostream>
#include <vector>
using namespace std;

/* 
�ĵ��� ���� P(N)�� ������ �ִ� ���ﰢ���� ���� �����̴�.
P(1)���� P(10)���� ù 10�� ���ڴ� 1, 1, 1, 2, 2, 3, 4, 5, 7, 9�̴�.
N�� �־����� ��, P(N)�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main() {
	int T, N;
	long long arr[105] = { 0, }; // ������ ���� ������ �迭�� ����.

	cin >> T;

	// �ʱⰪ ����.
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;

	while (T > 0) {

		cin >> N;
		for (int i = 6; i <= N; i++) {
			arr[i] = arr[i - 5] + arr[i - 1]; // ��ȭ��
		}

		cout << arr[N] << endl; // ���� ���.
		T--;
	}

	return 0;
}
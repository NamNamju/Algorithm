#include <iostream>
#include <math.h>
using namespace std;

// ���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;

	cin >> num;

	for (int i = 2; i <= sqrt(num); i++) { // �Ҽ��� ��Ʈ n���� Ŭ ���� ����.
		while (num % i == 0) {
			cout << i << endl;
			num /= i;

		}
	}

	if (num > 1) cout << num;

	return 0;
}
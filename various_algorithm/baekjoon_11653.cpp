#include <iostream>
#include <math.h>
using namespace std;

// 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

int main() {
	int num;

	cin >> num;

	for (int i = 2; i <= sqrt(num); i++) { // 소수는 루트 n보다 클 수가 없다.
		while (num % i == 0) {
			cout << i << endl;
			num /= i;

		}
	}

	if (num > 1) cout << num;

	return 0;
}
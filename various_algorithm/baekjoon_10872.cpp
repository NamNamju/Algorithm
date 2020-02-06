#include <iostream>
using namespace std;

// 0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

int main() {
	int num;
	int mul = 1;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		mul *= i;
	}

	cout << mul;
	return 0;
}
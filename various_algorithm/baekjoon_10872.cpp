#include <iostream>
using namespace std;

// 0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
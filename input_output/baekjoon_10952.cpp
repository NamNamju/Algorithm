#include <iostream>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int a, b;
	while (cin >> a >> b) { // a�� b�� ���� �޴� ���� ����.
		if (a == 0 && b == 0) break; // a�� b�� 0�� ��� while���� Ż��.
		cout << a + b << endl; // a + b�� ���� ���.
	}

	return 0;
}
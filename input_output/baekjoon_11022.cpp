#include <iostream>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A + B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num = 0;
	int a, b, c;

	cin >> a;

	while (a != num) {
		num++;
		cin >> b >> c;
		cout << "Case #" << num << ": " << b << " + " << c << " = " << b + c << endl;
	}

	return 0;


}
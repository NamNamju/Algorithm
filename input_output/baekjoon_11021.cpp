#include <iostream>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int a, m, n; // ���ڸ� �Է¹��� ����
	int num = 0;
	int sum;

	cin >> a;
	while (a != num) {
		cin >> m >> n;
		sum = m + n;
		num++;
		cout << "Case #" << num << ": " << sum << endl;
	}
	return 0;
}
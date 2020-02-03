#include <iostream>
using namespace std;

// �� �ڿ��� A�� B�� �־����� ��, A�� B�� �ּҰ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// '��Ŭ���� ȣ����'�� �̿��Ѵ�.

long long GCD(long long a, long long b) { // ��Ŭ���� ȣ���� : ū ������ ���� ���� ���� ������ �̿�
	if (b == 0) return a;
	
	return GCD(b, a % b);
}

int main() {
	long long num1, num2, mnum, nnum;	

	cin >> num1 >> num2;

	// �ִ������� ���� �� ����.
	if (num1 > num2)
	{
		mnum = num2;
		nnum = num1;
	}
	else {
		mnum = num1;
		nnum = num2;
	}

	long long a = GCD(mnum, nnum);

	while (a--) {
		cout << "1";
	}

	return 0;
}
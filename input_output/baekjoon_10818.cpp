#include <iostream>
using namespace std;

// N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num1, num2;
	int numArr[999] = { };
	int count = 0;

	cin >> num1; // ������ ����

	while (count != num1) { // ���ڸ�ŭ �Է� ����.
		cin >> num2;
		numArr[count] = num2; // �迭�� ����
		count++;
	}

	// �ʱ� ����
	int max = numArr[0];
	int min = numArr[0];


	for (int i = 1; i < num1; i++) {

		if (max < numArr[i]) max = numArr[i]; // numArr[i]�� Ŭ ��� max�� ����
		if (min > numArr[i]) min = numArr[i]; // numArr[i]�� ���� ��� min�� ����
	}
	cout << min << " " << max;

	return 0;
}
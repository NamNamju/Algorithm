#include <iostream>
#include <string>
using namespace std;

// N!���� �ڿ������� ó�� 0�� �ƴ� ���ڰ� ���� ������ 0�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ó���� �ܼ��� ���丮���� ��� �� 0�� ã�Ҵµ�, ������ �Ѿ��.
// Ǯ�� : 2�� 5�� �ִ� ������ŭ 0�� ����. (2*5 = 10, 2*2*5*5 = 100 ...) ���丮���� ����� �� 2�� 5���� �����Ƿ� 5�� ���ش�.

int main() {

	int num;
	int count = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		int temp = i; // temp�� ����.
		while (temp != 1) {
			if (temp % 5 == 0) // temp�� 5�� ���� �������� 0�� ���
			{
				count++;
				temp /= 5;
			}
			else break;
		}
	}

	cout << count;
	return 0;
}
#include <iostream>
using namespace std;

// �� �ڿ��� A�� B�� �־����� ��, A�� B�� �ּҰ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num1, num2;	
	int max = 0;
	int min = 0;
	int mnum, nnum;
	int count = 0;
	cin >> count;

	while (count>0) {

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

		for (int i = 1; i <= mnum; i++) { // �ִ������� �� �� ���� �������� ����.

			if (mnum % i == 0) { // �������� 0�� ���
				if (nnum % i == 0) {
					max = i;
				}
			}
		}

		cout << mnum * nnum / max << endl; // �ּҰ������ �� ���� ���� �ִ������� ���� ��.
		count--;
	}

	

	return 0;
}
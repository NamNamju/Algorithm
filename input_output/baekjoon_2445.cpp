#include <iostream>
using namespace std;

// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num*2; i++) { // 2 * num - 1 ��ŭ�� ������ ���� ���
		
		for (int j = 0; j < num * 2; j++) {
			if (i < num-1) { // ���� i�� num - 1���� ���� ��� ( ��, ����)

				if (j <= i) cout << "*";  // ���� j�� i���� ���� ��� (����)
				else if (j < num * 2 - i-1) cout << " "; // ����
				else cout << "*";
			}

			else  {

				if (j < 2 * num - i-1) cout << "*"; // ����
				else if (j <= i) cout << " "; // ����
				else cout << "*";
			}
		}

		cout << endl;
	}

	return 0;
}
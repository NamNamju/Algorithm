#include <iostream>
using namespace std;

// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) { // �� num��ŭ�� �� ���� ���
		for (int j = 0; j < num - i - 1; j++) { // �� ���� ����
			cout << " ";
		}

		for (int j = 0; j < 2 * (i+1) - 1; j++) { // ���� ������ �����ϴ� �κ�

			if (j % 2 == 1) cout << " "; // �߰� �߰��� ����
			else cout << "*"; // �� ���
		}
		
		cout << endl;
	}

	return 0;


}
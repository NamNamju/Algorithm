#include <iostream>
using namespace std;

// ������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) { // num�� �� ����ŭ ���.
		if (i == num - 1) { // ���� �� ������ ���̶��
			for (int j = 0 ; j < 2*num-1 ; j++) cout << "*"; // ���� ���
		}

		else { // �׷��� �ʴٸ�
			
		for (int j = 0; j < num - i - 1; j++) { // ���� ����
			cout << " ";
		}

		for (int j = 0; j < 1; j++) { // �� ���� �� �� �� ���
			cout << "*";

		}

		for (int j = 1; j < 2 * i; j++) { // �߰� ���� ���
			cout << " ";
		}

		if (i > 0) { // ���࿡ ���� ù��° ���� �ƴ϶�� (�� ù��° �ٸ� �����ϰ�)
			for (int j = 0; j < 1; j++) { // �� ���� �� �� �� ���
				cout << "*";
			}
		}

		}
				
		cout << endl;
	}

	return 0;
}
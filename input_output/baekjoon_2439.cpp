#include <iostream>
using namespace std;

/*
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
*/

int main() {
	int num;

	cin >> num;

	for (int i = num; i > 0; i--) { // �� num ������ ���� ���
		for (int j = 1; j <= num; j++) // 1���� num����
		{
			if (j < i) cout << " "; // ���� j�� i���� �۴ٸ� ���� ���
			else cout << "*"; // �� ���
		}
		cout << endl;
	}
	
	return 0;
}
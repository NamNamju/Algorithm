#pragma warning (disable: 4996)
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int a, m, n; // ������ �� ����, ','�� ���� �������� ���� �ΰ��� ������ ����
	int num = 0; // while���� Ż�� ������ ����
	char str[5] = " "; // '����,����'�� �Է� ���� ����
	char* tok; // str�� ','���� �����Ͽ� ������ ����
	int sum; // ��

	cin >> a;
	while (num != a) {
		cin >> str;
		tok = strtok(str, ","); // strtok���� str�� ","���� �����Ͽ� �����Ѵ�.

		m = tok[0] -'0'; // char*�� int�� ��ȯ��.
		n = tok[2] - '0';
		sum = m + n;
		cout << sum << endl;
		sum = 0;
		num++; // 1�� ����

	}


	return 0;
}
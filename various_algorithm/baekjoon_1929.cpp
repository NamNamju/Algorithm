#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2); // M�� N �Է� ����.

	for (int i = num1; i <= num2; i++) {

		bool primeNum = true; // true�� ����.

		if (i > 1) { // 1���� Ŭ ��� (1�� �Ҽ�X)
			for (int j = 2; j <= sqrt(i); j++) { // �����佺�׳׽��� ����

				/*
				�־��� �ڿ��� N�� �Ҽ��̱� ���� �ʿ���� ������
				N�� N�� �����ٺ��� ũ�� ���� � �Ҽ��ε� �������� �ʴ´�.
				*/

				if (i % j == 0)
				{
					primeNum = false;
					break;
				}


			}

			if (primeNum) printf("%d\n", i); // �Ҽ��� ��� ���.
		}
	}

	return 0;
}
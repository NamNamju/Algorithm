#include <iostream>
#include <math.h>
using namespace std;

// �־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int numCount;
	int num;
	int count = 0;
	cin >> numCount;

	for (int i = 0; i < numCount; i++) {
		cin >> num;

		bool primeNum = true; // true�� ����.

		if (num > 1) { // 1���� Ŭ ��� (1�� �Ҽ�X)
			for (int i = 2; i <= sqrt(num); i++) { // �����佺�׳׽��� ����

				/*
				�־��� �ڿ��� N�� �Ҽ��̱� ���� �ʿ���� ������ 
				N�� N�� �����ٺ��� ũ�� ���� � �Ҽ��ε� �������� �ʴ´�.
				*/

				if (num % i == 0)
				{
					primeNum = false;
					break;
				}


			}
			if (primeNum) count++; // �Ҽ��� ��� ���ش�.
		}

		

	}

	cout << count;

	return 0;
}
#include <iostream>
using namespace std;

// �� �ڿ��� A, B, C, D�� �־�����. �̶�, A�� B�� ���� ���� C�� D�� ���� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	// �Է� ���� ��
	int anum1 = 0;
	int anum2 = 0;
	int bnum1 = 0;
	int bnum2 = 0;
	cin >> anum1 >> anum2 >> bnum1 >> bnum2;

	// �ڸ����� ���� ���ؼ� num1�� num2�� B, D�� �ش��ϴ� �� ����
	int num1 = anum2;
	int num2 = bnum2;

	// �ڸ���
	int count1 = 0;
	int count2 = 0;

	// �ڸ��� ����		
		do {
			num1 /= 10;
			count1++;

		} while (num1 > 0);

		do {
			num2 /= 10;
			count2++;

		} while (num2 > 0);

	// ���
	cout << (long long)(anum1 * pow((double)10, (double)count1) + anum2) + 
		(long long)(bnum1 * pow((double)10, (double)count2) + bnum2) << endl;

	return 0;

}
#include <iostream>
using namespace std;

// ������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int month, day;
	int thirtyOne = 0; // 31�ϱ����� ��
	int thirty = 0; // 30�ϱ����� ��
	int twenty = 0; // 28�ϱ����� ��
	string week[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

	cin >> month >> day;

	for (int i = 1; i < month; i++) { // 1���� (month -1)���� check
		if (i == 4 || i ==  6 || i == 9 || i == 11) thirty++;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i== 12) thirtyOne++;
		if (i == 2) twenty++;
	}

	day = thirty * 30 + thirtyOne * 31 + twenty * 28 + day; // �� day ���� ���
	cout << week[day % 7] << endl; // 7�� ���� �������� ���� ������ ���.
	return 0;

}
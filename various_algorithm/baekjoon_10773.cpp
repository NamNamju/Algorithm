#include <iostream>
#include <vector>
using namespace std;

/* 
�����̴� �߸��� ���� �θ� ������ 0�� ���ļ�, ���� �ֱٿ� ����̰� �� ���� ����� ��Ų��.
����̴� �̷��� ��� ���� �޾� ���� �� �� ���� ���� �˰� �;� �Ѵ�. ����̸� ��������
!*/

int main() {
	int K; // ���� �Է� �޴´�.
	int a; // vec�� �Է��� ��.
	long long sum = 0; // ��
	vector <int> vec;

	cin >> K;

	while (K--) {
		cin >> a;

		vec.push_back(a);

		if (a == 0) { // 0�� ���
			vec.pop_back();
			vec.pop_back();
		}
	}

	for (int i : vec) {
		sum += i;
	}

	cout << sum;

	return 0;
}
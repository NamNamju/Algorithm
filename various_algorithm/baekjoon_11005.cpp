#include <iostream>
#include <vector>
using namespace std;

// 10���� �� N�� �־�����. �� ���� B�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	vector <int> vec;
	int num, count;
	char a[27] = { 0, };

	for (int i = 0; i < 26; i++) { // ���ĺ� ����
		a[i] = 'A' + i;
	}
	cin >> num >> count;

	while (num != 0) { // �������� vec�� ����.
		int r = num % count;
		num /= count;
		vec.push_back(r);
	}
	

	if (count > 10) { // ���� 10������ �Ѿ ���

		for (int i = vec.size() - 1; i >= 0; i--) {
			if (vec[i] >= 10)
			{
				char t = a[vec[i] - 10]; // ���ĺ����� ��ȯ.
				cout << t;
			}
			else {
				cout << vec[i];
			}

		}

	}
	else { // �ƴ� ���.

		for (int i = vec.size() - 1; i >= 0; i--) {
			cout << vec[i];
		}
	}

	return 0;

}
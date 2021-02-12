#include <iostream>
#include <vector>
using namespace std;

// ���� N�� �־����� ��, ���� ���� ���� �� ���� ������ ����ؼ� 1�� ������� �Ѵ�. ������ ����ϴ� Ƚ���� �ּڰ��� ����Ͻÿ�.

int main() {
	int num;
	int count = 0;
	int temp;
	vector <int> vec; // vec -> Ƚ���� �ּڰ�

	cin >> num;

	// num = 1 ���� 3 ������ Ƚ�� 1�� �ʱ�ȭ ���ش�.
	vec.push_back(0); // num = 0 �� ��
	vec.push_back(0); // num = 1 �� ��
	vec.push_back(1); // num = 2 �� ��
	vec.push_back(1); // num = 3 �� ��

	// 4���� num������ Ƚ��
	for (int i = 4; i <= num; i++) {
		vec.push_back(vec[i - 1] + 1); // 1�� ����. +1�� �ʱⰪ.

		if (i % 2 == 0) {
			temp = vec[i / 2] + 1; // 2�� ������.
			if (temp < vec[i]) vec[i] = temp;
		}

		if (i % 3 == 0) {
			temp = vec[i / 3] + 1; // 3���� ������.
			if (temp < vec[i]) vec[i] = temp;
		}
	}

	cout << vec[num] << endl;

	return 0;

}
#include <iostream>
#include <vector>
using namespace std;

// ���� n�� �־����� ��, n�� 1, 2, 3�� ������ ��Ÿ���� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ��Ģ�� ã�´�.

int main() {
	int tnum;
	int num;
	vector <int> vec;

	
	cin >> tnum;

	while (tnum--) {
		cin >> num;

		// �ʱⰪ ����.
		vec.push_back(0);
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(4);

		for (int i = 4; i <= num; i++) {
			vec.push_back(vec[i - 1] + vec[i - 2] + vec[i - 3]); // ��ȭ��.
		}

		cout << vec[num] << endl;

		vec.clear(); // vector�� ����ش�.
	}

	return 0;
}
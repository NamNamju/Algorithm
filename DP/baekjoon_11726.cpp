#include <iostream>
#include <vector>
using namespace std;

// 2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �׸��� �׷��� n = 1�� ������ ������ ��Ģ�� ���´�.

int main() {
	int num;
	vector <int> vec;
	cin >> num;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);

	for (int i = 3; i <= num; i++) {
		vec.push_back(vec[i - 1]+vec[i - 2] % 10007); // ������ ������ 10007�� ���� ������. �信 �������� ����� Ʋ�ȴٰ� ä��.

	}

	cout << vec[num] << endl;

	return 0;
}
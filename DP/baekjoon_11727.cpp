#include <iostream>
#include <vector>
using namespace std;

// 2��n ���簢���� 2��1�� 2��2 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 11726 ������ ���.

int main() {
	int num;
	cin >> num;
	vector <int> vec;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(3);

	for (int i = 3; i <= num; i++) {
		vec.push_back((vec[i - 1] + vec[i - 2] * 2) % 10007); // ��ȭ���� ���Ѵ�.
	}

	cout << vec[num];

	return 0;
}
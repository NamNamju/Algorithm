#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// N(1 �� N �� 90)�� �־����� ��, N�ڸ� ��ģ���� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ��ȭ���� ���Ѵ�.

int main() {

	int num;
	vector <long long> vec; // int�� ���� ��� ����.

	cin >> num;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(1);

	for (int i = 3; i <= num; i++) {
		vec.push_back(vec[i - 1] + vec[i - 2]); // ��ȭ��.
	}

	cout << vec[num];

	return 0;

}
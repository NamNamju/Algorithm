#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// �� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num1, num2;
	vector <int> vec;
	cin >> num1 >> num2;
	int max = 0;
	int min = 0;
	int mnum;
	int nnum;

	// �ִ������� ���� �� ����.
	if (num1 > num2)
	{
		mnum = num2;
		nnum = num1;
	}
	else {
		mnum = num1;
		nnum = num2;
	}

	for (int i = 1; i <= mnum; i++) { // �ִ������� �� �� ���� �������� ����.
	
		if (mnum % i == 0) { // �������� 0�� ���
			if (nnum % i == 0 ){
				max = i;
				}
		}
	}
	
	for (int i = 1; i < 10000; i++) { // ���Ϳ� num1�� i�� ���� �� ����.
		vec.push_back(num1 * i);
	}
	for (int i = 1; i < 10000; i++) {
		int a = num2 * i;
		if (find(vec.begin(), vec.end(), a) != vec.end()) { // ���Ϳ� ���� ���� �ִ��� ã�´�.
			min = a;
			break;
		}
	}

	cout << max << endl;
	cout << min << endl;

	return 0;
}
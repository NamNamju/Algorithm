#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// B���� �� N�� �־�����. �� ���� 10�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	string str;
	int count;
	long long sum = 0;
	vector <char> vec;

	cin >> str >> count;

	for (int i = 0; i < str.size(); i++) { // vector�� ����.
		vec.push_back(str[i]);
	}

	for (int i = 0; i < vec.size(); i++) {
		if ('A' <= vec[i] && vec[i] <= 'Z') { // ���ĺ��� ���
			sum += (((int)vec[i]-55)*pow(count,(vec.size()-i-1)));
			
		}
		else { // ������ ���
			sum += (vec[i]-'0')* pow(count, (vec.size() - i - 1));
			
		}
	}

	cout << sum;

	return 0;
}
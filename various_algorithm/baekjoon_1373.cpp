#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// 2������ �־����� ��, 8������ ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 2���� -> 10���� -> 8������ ��� �ð��ʰ�.
// �� ���� ���ھ� �ɰ��� 8������ ��ȯ.

int main() {
	string num;
	vector <int> vec;
	cin >> num;

	if (num.size() % 3 == 2) { // �������� 2�� ���
		vec.push_back((num[0] - '0') * 2 + (num[1] - '0'));
		if (num.size() > 2) {
			for (int i = 2; i < num.size()-2; i+=3) {
				vec.push_back((num[i] - '0') * 4 + (num[i+1] - '0') * 2 + (num[i+2] - '0'));
			}
		}
	}
	else if (num.size() % 3 == 1) { // �������� 1�� ���
		vec.push_back((num[0] - '0'));
		if (num.size() > 1) {
			for (int i = 1; i < num.size()-1; i+3) {
				vec.push_back((num[i] - '0') * 4 + (num[i+1] - '0') * 2 + (num[i+2] - '0'));
			}
		}
	}
	else { // �������� 0�� �椷 
		for (int i = 0; i < num.size(); i+3) {
			vec.push_back((num[i] - '0') * 4 + (num[i+1] - '0') * 2 + (num[i+2] - '0'));
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
	return 0;
}

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// 2진수가 주어졌을 때, 8진수로 변환하는 프로그램을 작성하시오.
// 2진수 -> 10진수 -> 8진수의 경우 시간초과.
// 세 개의 숫자씩 쪼개서 8진수로 변환.

int main() {
	string num;
	vector <int> vec;
	cin >> num;

	if (num.size() % 3 == 2) { // 나머지가 2일 경우
		vec.push_back((num[0] - '0') * 2 + (num[1] - '0'));
		if (num.size() > 2) {
			for (int i = 2; i < num.size()-2; i+=3) {
				vec.push_back((num[i] - '0') * 4 + (num[i+1] - '0') * 2 + (num[i+2] - '0'));
			}
		}
	}
	else if (num.size() % 3 == 1) { // 나머지가 1일 경우
		vec.push_back((num[0] - '0'));
		if (num.size() > 1) {
			for (int i = 1; i < num.size()-1; i+3) {
				vec.push_back((num[i] - '0') * 4 + (num[i+1] - '0') * 2 + (num[i+2] - '0'));
			}
		}
	}
	else { // 나머지가 0일 경ㅇ 
		for (int i = 0; i < num.size(); i+3) {
			vec.push_back((num[i] - '0') * 4 + (num[i+1] - '0') * 2 + (num[i+2] - '0'));
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}
	return 0;
}

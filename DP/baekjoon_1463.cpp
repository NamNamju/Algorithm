#include <iostream>
#include <vector>
using namespace std;

// 정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.

int main() {
	int num;
	int count = 0;
	int temp;
	vector <int> vec; // vec -> 횟수의 최솟값

	cin >> num;

	// num = 1 부터 3 까지는 횟수 1로 초기화 해준다.
	vec.push_back(0); // num = 0 일 때
	vec.push_back(0); // num = 1 일 때
	vec.push_back(1); // num = 2 일 때
	vec.push_back(1); // num = 3 일 때

	// 4부터 num까지의 횟수
	for (int i = 4; i <= num; i++) {
		vec.push_back(vec[i - 1] + 1); // 1을 뺀다. +1은 초기값.

		if (i % 2 == 0) {
			temp = vec[i / 2] + 1; // 2로 나눈다.
			if (temp < vec[i]) vec[i] = temp;
		}

		if (i % 3 == 0) {
			temp = vec[i / 3] + 1; // 3으로 나눈다.
			if (temp < vec[i]) vec[i] = temp;
		}
	}

	cout << vec[num] << endl;

	return 0;

}
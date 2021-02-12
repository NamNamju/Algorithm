#include <iostream>
#include <vector>
using namespace std;

// 정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.
// 규칙을 찾는다.

int main() {
	int tnum;
	int num;
	vector <int> vec;

	
	cin >> tnum;

	while (tnum--) {
		cin >> num;

		// 초기값 설정.
		vec.push_back(0);
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(4);

		for (int i = 4; i <= num; i++) {
			vec.push_back(vec[i - 1] + vec[i - 2] + vec[i - 3]); // 점화식.
		}

		cout << vec[num] << endl;

		vec.clear(); // vector를 비워준다.
	}

	return 0;
}
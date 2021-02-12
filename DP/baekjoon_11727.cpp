#include <iostream>
#include <vector>
using namespace std;

// 2×n 직사각형을 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
// 11726 문제와 비슷.

int main() {
	int num;
	cin >> num;
	vector <int> vec;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(3);

	for (int i = 3; i <= num; i++) {
		vec.push_back((vec[i - 1] + vec[i - 2] * 2) % 10007); // 점화식을 구한다.
	}

	cout << vec[num];

	return 0;
}
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// N(1 ≤ N ≤ 90)이 주어졌을 때, N자리 이친수의 개수를 구하는 프로그램을 작성하시오.
// 점화식을 구한다.

int main() {

	int num;
	vector <long long> vec; // int로 했을 경우 오답.

	cin >> num;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(1);

	for (int i = 3; i <= num; i++) {
		vec.push_back(vec[i - 1] + vec[i - 2]); // 점화식.
	}

	cout << vec[num];

	return 0;

}
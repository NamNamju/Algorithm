#include <iostream>
#include <vector>
using namespace std;

// 2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
// 그림을 그려서 n = 1일 때부터 세보니 규칙이 나온다.

int main() {
	int num;
	vector <int> vec;
	cin >> num;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);

	for (int i = 3; i <= num; i++) {
		vec.push_back(vec[i - 1]+vec[i - 2] % 10007); // 문제의 조건이 10007로 나눈 나머지. 답에 나머지를 씌우니 틀렸다고 채점.

	}

	cout << vec[num] << endl;

	return 0;
}
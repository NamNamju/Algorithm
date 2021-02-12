#include <iostream>
using namespace std;

// 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

int main() {
	int num;

	cin >> num;

	for (int i = num; i > 0; i--) { // 총 num의 수만큼 줄을 출력.
		for (int j = i; j > 0; j--) { // i만큼 출력.
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
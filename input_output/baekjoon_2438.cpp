#include <iostream>
using namespace std;

// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

int main() {

	int num;

	cin >> num; // N개

	for (int i = 0; i < num; i++) { // 0번째 줄부터 (num - 1)번째 줄 까지
		for (int j = 0; j <= i; j++) { // 0번째 줄은 1개, 1번째 줄은 2개 ... (num - 1)번째 줄은 num개
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
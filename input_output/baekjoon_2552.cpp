#include <iostream>
using namespace std;

// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) { // 윗 부분 (중간 포함)
		for (int j = 1; j < num - i; j++) { // 공백
			cout << " ";
		}
		for (int j = 0; j <= i; j++) { // 별
			cout << "*";
		}

		cout << endl;
	}

	for (int i = 1; i < num; i++) { // 아랫 부분

		for (int j = 0; j < i; j++) { // 공백
			cout << " ";
		}
		for (int j = 0; j < num - i; j++) { // 별
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
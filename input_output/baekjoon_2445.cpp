#include <iostream>
using namespace std;

// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num*2; i++) { // 2 * num - 1 만큼의 개수의 줄을 출력
		
		for (int j = 0; j < num * 2; j++) {
			if (i < num-1) { // 만약 i가 num - 1보다 작을 경우 ( 즉, 절반)

				if (j <= i) cout << "*";  // 만약 j가 i보다 작을 경우 (왼쪽)
				else if (j < num * 2 - i-1) cout << " "; // 공백
				else cout << "*";
			}

			else  {

				if (j < 2 * num - i-1) cout << "*"; // 왼쪽
				else if (j <= i) cout << " "; // 공백
				else cout << "*";
			}
		}

		cout << endl;
	}

	return 0;
}
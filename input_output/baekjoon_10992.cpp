#include <iostream>
using namespace std;

// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) { // num의 줄 수만큼 출력.
		if (i == num - 1) { // 만약 맨 마지막 줄이라면
			for (int j = 0 ; j < 2*num-1 ; j++) cout << "*"; // 별만 출력
		}

		else { // 그렇지 않다면
			
		for (int j = 0; j < num - i - 1; j++) { // 앞의 공백
			cout << " ";
		}

		for (int j = 0; j < 1; j++) { // 그 다음 별 한 개 출력
			cout << "*";

		}

		for (int j = 1; j < 2 * i; j++) { // 중간 공백 출력
			cout << " ";
		}

		if (i > 0) { // 만약에 제일 첫번째 줄이 아니라면 (즉 첫번째 줄만 제외하고)
			for (int j = 0; j < 1; j++) { // 그 다음 별 한 개 출력
				cout << "*";
			}
		}

		}
				
		cout << endl;
	}

	return 0;
}
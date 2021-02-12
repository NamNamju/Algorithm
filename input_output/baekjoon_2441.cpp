#include <iostream>
using namespace std;

/*
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
*/

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) { // 총 num만큼의 줄 수를 출력
		for (int j = 1; j <= num; j++) { // 1부터 num까지
			if (j <= i) cout << " "; // 만약 j가 i 보다 작다면 공백 출력
			else cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
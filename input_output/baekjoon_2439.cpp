#include <iostream>
using namespace std;

/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
*/

int main() {
	int num;

	cin >> num;

	for (int i = num; i > 0; i--) { // 총 num 개수의 줄을 출력
		for (int j = 1; j <= num; j++) // 1부터 num까지
		{
			if (j < i) cout << " "; // 만약 j가 i보다 작다면 공백 출력
			else cout << "*"; // 별 출력
		}
		cout << endl;
	}
	
	return 0;
}
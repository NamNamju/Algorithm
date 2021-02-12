#include  <iostream>
#include <vector>
using namespace std;

/* 
파도반 수열 P(N)은 나선에 있는 정삼각형의 변의 길이이다.
P(1)부터 P(10)까지 첫 10개 숫자는 1, 1, 1, 2, 2, 3, 4, 5, 7, 9이다.
N이 주어졌을 때, P(N)을 구하는 프로그램을 작성하시오.
*/

int main() {
	int T, N;
	long long arr[105] = { 0, }; // 수열의 값을 저장할 배열을 선언.

	cin >> T;

	// 초기값 저장.
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;

	while (T > 0) {

		cin >> N;
		for (int i = 6; i <= N; i++) {
			arr[i] = arr[i - 5] + arr[i - 1]; // 점화식
		}

		cout << arr[N] << endl; // 답을 출력.
		T--;
	}

	return 0;
}
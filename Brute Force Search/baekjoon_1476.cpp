#include <iostream>
using namespace std;

/* 
E, S, M이 주어졌고, 1년이 준규가 사는 나라에서 1 1 1일때, 
준규가 사는 나라에서 E S M이 우리가 알고 있는 연도로 몇 년인지 구하는 프로그램을 작성하시오.
*/

int main() {

	int E, S, M;
	int count = 1;
	 
	cin >> E >> S >> M; // 입력받는다.

	while (E != 1 || S != 1 || M != 1) { // E = 1, S = 1, M = 1 일 때까지 계산한다.
		E--;
		S--;
		M--;

		// 0이 될 경우 끝 값 설정.
		if (E == 0) E = 15;
		if (S == 0) S = 28;
		if (M == 0) M = 19;

		count++; // 횟수 세기.

	}

	cout << count;

	return 0;
}
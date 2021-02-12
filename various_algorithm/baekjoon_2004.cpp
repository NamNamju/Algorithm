#include <iostream>
using namespace std;

// nCm의 끝자리 0의 개수를 출력하는 프로그램을 작성하시오.
// 소인수 x의 개수는 x부터	x의 n제곱까지 나눈 후 나눈 값을 전부 더한다.

int main() {

	long long m, n;
	int tcount = 0;
	int fcount = 0;
	cin >> m >> n;

	for (long long i = 2; i <= m; i = i * 2) {
		tcount = tcount + m/i;
	}
	for (long long i = 2; i <= n; i = i * 2) {
		tcount = tcount - n/i;
	}
	for (long long i = 2; i <= m-n; i = i * 2) {
		tcount = tcount - (m-n)/i;
	}
	for (long long i = 5; i <= m; i = i * 5) {
		fcount = fcount + m/i;
	}
	for (long long i = 5; i <= n; i = i * 5) {
		fcount = fcount - n/i;
	}
	for (long long i = 5; i <= m-n; i = i * 5) {
		fcount = fcount - (m-n)/i;
	}

	if (tcount > fcount) cout << fcount;
	else cout << tcount;

}
#include <iostream>
using namespace std;

// nCm�� ���ڸ� 0�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ���μ� x�� ������ x����	x�� n�������� ���� �� ���� ���� ���� ���Ѵ�.

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
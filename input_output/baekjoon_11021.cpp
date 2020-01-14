#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {
	int a, m, n; // 숫자를 입력받을 변수
	int num = 0;
	int sum;

	cin >> a;
	while (a != num) {
		cin >> m >> n;
		sum = m + n;
		num++;
		cout << "Case #" << num << ": " << sum << endl;
	}
	return 0;
}
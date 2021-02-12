#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {
	int a, b;
	cin >> a >> b; // 두 정수 a, b를 입력받는다.
	// cin은 space와 enter 모두로 값을 입력받을 수 있다.

	int c = a + b;
	cout << c << endl; // a + b를 출력

	return 0;
}
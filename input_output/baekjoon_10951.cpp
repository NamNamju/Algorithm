#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {
	int a, b;
	while (cin >> a >> b) // a와 b를 입력받는 동안만 진행.
	{
		cout << a + b << endl; // a + b의 값을 출력.
	}

	return 0;
}
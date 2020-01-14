#include <iostream>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A + B를 출력하는 프로그램을 작성하시오.

int main() {
	int num = 0;
	int a, b, c;

	cin >> a;

	while (a != num) {
		num++;
		cin >> b >> c;
		cout << "Case #" << num << ": " << b << " + " << c << " = " << b + c << endl;
	}

	return 0;


}
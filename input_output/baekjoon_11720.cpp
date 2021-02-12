#include <iostream>
#include <string>
using namespace std;

// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

int main() {
	string str;
	int sum = 0;
	int num;

	cin >> num;
	cin >> str;

	for (int i = 0; i < num; i++) {
		int m = str[i] - '0'; // 정수로 변환
		sum += m; // str[i]를 모두 더한다.
	}

	cout << sum << endl;

	return 0;

}
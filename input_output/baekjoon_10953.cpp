#pragma warning (disable: 4996)
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {
	int a, m, n; // 숫자의 쌍 갯수, ','을 통해 나눠지는 숫자 두개를 저장할 변수
	int num = 0; // while문의 탈출 조건인 변수
	char str[5] = " "; // '숫자,숫자'를 입력 받을 변수
	char* tok; // str을 ','으로 구분하여 저장할 변수
	int sum; // 합

	cin >> a;
	while (num != a) {
		cin >> str;
		tok = strtok(str, ","); // strtok으로 str을 ","으로 구분하여 저장한다.

		m = tok[0] -'0'; // char*을 int로 변환함.
		n = tok[2] - '0';
		sum = m + n;
		cout << sum << endl;
		sum = 0;
		num++; // 1씩 증가

	}


	return 0;
}
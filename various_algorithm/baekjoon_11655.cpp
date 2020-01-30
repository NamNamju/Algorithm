#include <iostream>
#include <string>
using namespace std;

// 문자열이 주어졌을 때, "ROT13"으로 암호화한 다음 출력하는 프로그램을 작성하시오.

int main() {
	string a;

	getline(cin, a); // 문자 입력받음
		
	for (int i = 0; i < a.length(); i++) {

		if ((a[i] >= 'a' && a[i] <= 'a' + 12) || (a[i] >= 'A' && a[i] <= 'A' + 12)) // 아스키코드 이용. A부터 ㅣ까지
		{
			cout << (char)(a[i] + 13);
		}
		else if ((a[i] >= '0' && a[i] <= '9') || a[i] == ' ') // 숫자나 공백일 경우
		{
			cout << a[i];
		}
		else // M부터 Z까지.
		{
			cout << (char)(a[i] - 13);
		}

	}

	return 0;

}
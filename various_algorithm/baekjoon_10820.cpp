#include <iostream>
#include <string>
using namespace std;

/*
문자열 N개가 주어진다. 이때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.
각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.
*/

int main() {
	int arr[4] = { 0, };
	string str;

	while (getline(cin, str)) { // 문자열을 입력받는다. (공백 포함)
		if (str.length() == 0) break; // 만약 문자열이 비었을 경우 멈춤.

		// 배열의 원소를 0으로 초과

		arr[0] = 0;
		arr[1] = 0;
		arr[2] = 0;
		arr[3] = 0;

		for (int i = 0; i < str.size(); i++) {

			for (char c = 'a'; c <= 'z'; c++) { // 알파벳 소문자
				if (str[i] == c) arr[0]++;
				
			}
			for (char s = 'A'; s <= 'Z'; s++) { // 알파벳 대문자
				if (str[i] == s) arr[1]++;
			}
			for (char c = '0'; c <= '9'; c++) { // 숫자
				if (str[i] == c) arr[2]++;
			}
			if (str[i] == ' ') arr[3]++; // 공백
			
		}

		for (int i = 0; i < 4; i++) { // 출력
			cout << arr[i] << " ";
		}
		cout << endl;

	}

	return 0;
}
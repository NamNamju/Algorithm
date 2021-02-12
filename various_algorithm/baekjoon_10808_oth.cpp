#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/* 문자열 N개가 주어진다. 이때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.
각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.*/

int main() {
	string str;
	cin >> str;

	for (char a = 'a'; a <= 'z'; a++) { // 'a' 부터 'z'까지
		cout << count(str.begin(), str.end(), a) << " "; // 개수를 세서 바로 출력함.
	}

	cout << endl;
	return 0;
}

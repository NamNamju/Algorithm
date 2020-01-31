#include <iostream>
#include <list>
using namespace std;

/*
초기에 편집기에 입력되어 있는 문자열이 주어지고, 그 이후 입력한 명령어가 차례로 주어졌을 때, 모든 명령어를 수행하고 난 후 편집기에 입력되어 있는 문자열을 구하는 프로그램을 작성하시오. 
단, 명령어가 수행되기 전에 커서는 문장의 맨 뒤에 위치하고 있다고 한다.
*/

int main() {
	string str;
	int num;

	cin >> str >> num; // 문자열과 개수 입력

	list<char> editor(str.begin(), str.end()); // list 생성
	auto cursor = editor.end(); // cursor는 초기에 맨 마지막에 위치.

	for (int i = 0; i < num; i++) {
		char ch;
		cin >> ch;

		if (ch =='L') {
			if (cursor != editor.begin()) {
				cursor--; // 왼쪽 한 칸
			}
		}
		else if (ch == 'D') {
			if (cursor != editor.end()) {
				cursor++; // 오른쪽 한 칸
			}

		}
		else if (ch == 'B') {
			if (cursor != editor.begin()) {
				cursor--; // 왼쪽에 있는 문자 삭제
				cursor = editor.erase(cursor);
				
			}
		}
		else if (ch == 'P'){
			char a;
			cin >> a;
			editor.insert(cursor, a); // 왼쪽에 문자 추가
		}
	}

	for (auto x : editor) {
		cout << x;
	}

	return 0;

}
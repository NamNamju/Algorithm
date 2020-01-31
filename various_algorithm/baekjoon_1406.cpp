#include <iostream>
#include <list>
using namespace std;

/*
�ʱ⿡ �����⿡ �ԷµǾ� �ִ� ���ڿ��� �־�����, �� ���� �Է��� ��ɾ ���ʷ� �־����� ��, ��� ��ɾ �����ϰ� �� �� �����⿡ �ԷµǾ� �ִ� ���ڿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��, ��ɾ ����Ǳ� ���� Ŀ���� ������ �� �ڿ� ��ġ�ϰ� �ִٰ� �Ѵ�.
*/

int main() {
	string str;
	int num;

	cin >> str >> num; // ���ڿ��� ���� �Է�

	list<char> editor(str.begin(), str.end()); // list ����
	auto cursor = editor.end(); // cursor�� �ʱ⿡ �� �������� ��ġ.

	for (int i = 0; i < num; i++) {
		char ch;
		cin >> ch;

		if (ch =='L') {
			if (cursor != editor.begin()) {
				cursor--; // ���� �� ĭ
			}
		}
		else if (ch == 'D') {
			if (cursor != editor.end()) {
				cursor++; // ������ �� ĭ
			}

		}
		else if (ch == 'B') {
			if (cursor != editor.begin()) {
				cursor--; // ���ʿ� �ִ� ���� ����
				cursor = editor.erase(cursor);
				
			}
		}
		else if (ch == 'P'){
			char a;
			cin >> a;
			editor.insert(cursor, a); // ���ʿ� ���� �߰�
		}
	}

	for (auto x : editor) {
		cout << x;
	}

	return 0;

}
#include <iostream>
#include <string>
#include <stack>
using namespace std;

// �����̸� ���� ���ڿ��� �־����� �� �������� ���ڿ����� �ƴ����� �Ǵ��غ���.

int main() {

	while (true) {

		//str.clear();
		string str;
		stack<char> s;

		getline(cin, str); // ������ �����Ͽ� string�� �Է� ����.

		bool check = true;

		if (str.length() == 1 && str[0] == '.') break;
		// �Է��� ������������ �� �ϳ�(".")

		for (int i = 0; i < str.length(); i++) {

			if (str[i] == '(') s.push(str[i]); 
			else if (str[i] == '[') s.push(str[i]);
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop(); // stack�� ������� �ʰ�, �� ���� �ִ� ���Ұ� '('��� top�� ����Ű�� ���� ����.
				else {
					check = false;
					break;
				}


			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else {
					check = false;
					break;
				}
			}
		}

		if (check && s.empty()) cout << "yes" << endl; // check�� true�̰� stack�� ������� ��� yes
		else cout << "no" << endl;


	}


	return 0;
}
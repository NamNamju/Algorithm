#include <iostream>
#include <string>
#include <stack>
using namespace std;

// 정민이를 도와 문자열이 주어졌을 때 균형잡힌 문자열인지 아닌지를 판단해보자.

int main() {

	while (true) {

		//str.clear();
		string str;
		stack<char> s;

		getline(cin, str); // 공백을 포함하여 string을 입력 받음.

		bool check = true;

		if (str.length() == 1 && str[0] == '.') break;
		// 입력의 종료조건으로 점 하나(".")

		for (int i = 0; i < str.length(); i++) {

			if (str[i] == '(') s.push(str[i]); 
			else if (str[i] == '[') s.push(str[i]);
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop(); // stack이 비어있지 않고, 맨 위에 있는 원소가 '('경우 top이 가르키는 원소 삭제.
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

		if (check && s.empty()) cout << "yes" << endl; // check가 true이고 stack이 비어있을 경우 yes
		else cout << "no" << endl;


	}


	return 0;
}
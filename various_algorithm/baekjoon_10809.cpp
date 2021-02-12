#include <iostream>
#include <vector>
using namespace std;

/* 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 
단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
*/

int main() {
	vector <int> vec;
	string str;
	cin >> str;

	for (char c = 'a'; c <= 'z'; c++) { // 'a'부터 'z'까지
		if (str.find(c) >= 0) // 단어가 존재할 경우
		{
			vec.push_back(str.find(c));
		}
		else { // 아닐 경우
			vec.push_back(-1);
		}
	}

	for (int i = 0; i < vec.size(); i++) { // 출력
		cout << vec[i] << " ";
	}

	return 0;
}
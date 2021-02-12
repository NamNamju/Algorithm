#include <iostream>
#include <vector>
using namespace std;

// 정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

int main() {
	int num, pnum;
	string str;
	vector <int> vec;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push_front" || str == "push_back") { // push의 경우 push할 number을 입력
			cin >> pnum;
		}
		

		if (str == "push_front") { // push_front일 경우
			vec.insert(vec.begin(), pnum); // vec 앞에 숫자 삽입.
		}
		else if (str == "push_back") { // push_back일 경우
			vec.push_back(pnum); // vec 뒤에 숫자 삽입.
		}
		else if (str == "front") { // front일 경우
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[0] << "\n";
		}
		else if (str == "back") { // back일 경우
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[vec.size()-1] << "\n";
		}
		else if (str == "size") cout << vec.size() << "\n"; // size일 경우
		else if (str == "empty") { // empty일 경우
			if (vec.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

		else if (str == "pop_front") // pop_front일 경우
		{
			if (vec.size() == 0) cout << -1 << "\n";
			else {
				cout << vec[0] << endl;
				vec.erase(vec.begin());
			}
		}
		else // pop_back일 경우
		{
			if (vec.size() == 0) cout << -1 << "\n";
			else {
				cout << vec[vec.size() - 1] << endl;
				vec.erase(vec.end()-1);
			}
		}
	}



	return 0;
}
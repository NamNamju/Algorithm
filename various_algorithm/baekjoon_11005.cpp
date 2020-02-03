#include <iostream>
#include <vector>
using namespace std;

// 10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.

int main() {
	vector <int> vec;
	int num, count;
	char a[27] = { 0, };

	for (int i = 0; i < 26; i++) { // 알파벳 저장
		a[i] = 'A' + i;
	}
	cin >> num >> count;

	while (num != 0) { // 나머지를 vec에 저장.
		int r = num % count;
		num /= count;
		vec.push_back(r);
	}
	

	if (count > 10) { // 만약 10진법을 넘어갈 경우

		for (int i = vec.size() - 1; i >= 0; i--) {
			if (vec[i] >= 10)
			{
				char t = a[vec[i] - 10]; // 알파벳으로 전환.
				cout << t;
			}
			else {
				cout << vec[i];
			}

		}

	}
	else { // 아닐 경우.

		for (int i = vec.size() - 1; i >= 0; i--) {
			cout << vec[i];
		}
	}

	return 0;

}
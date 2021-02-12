#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

int main() {
	string str;
	int count;
	long long sum = 0;
	vector <char> vec;

	cin >> str >> count;

	for (int i = 0; i < str.size(); i++) { // vector에 저장.
		vec.push_back(str[i]);
	}

	for (int i = 0; i < vec.size(); i++) {
		if ('A' <= vec[i] && vec[i] <= 'Z') { // 알파벳의 경우
			sum += (((int)vec[i]-55)*pow(count,(vec.size()-i-1)));
			
		}
		else { // 숫자의 경우
			sum += (vec[i]-'0')* pow(count, (vec.size() - i - 1));
			
		}
	}

	cout << sum;

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// 8진수가 주어졌을 때, 2진수로 변환하는 프로그램을 작성하시오.

int main() {
	string arr[8] = { "000","001","010","011","100","101","110","111" };
	string arr1[4] = { "0","1","10","11"};
	vector <string> vec1;
	string str;

	cin >> str;

	if (str[0] == '0' || str[0] == '1' || str[0] == '2' || str[0] == '3') {
		vec1.push_back(arr1[str[0] - '0']);
		for (int i = 1; i < str.length(); i++) {
			vec1.push_back(arr[str[i] - '0']);
		}
	}
	else {
		for (int i = 0; i < str.length(); i++) {
			vec1.push_back(arr[str[i] - '0']);
		}
	}
	
	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i];
	}
	
	return 0;
}
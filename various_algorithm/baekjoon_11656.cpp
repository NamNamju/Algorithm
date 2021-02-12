#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 문자열 S가 주어졌을 때, 모든 접미사를 사전순으로 정렬한 다음 출력하는 프로그램을 작성하시오.

int main() {
	vector <string> vec;
	string str;
	cin >> str;

	vec.push_back(str); // vector에 str 저장.

	while (true)
	{

		str.erase(0,1); // str의 맨 앞 원소 삭제
		if (str.length() == 0) break; // 길이가 0일 경우 break.
		vec.push_back(str);	// vector에 str 저장.
		
	}

	sort(vec.begin(), vec.end()); // 정렬

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	return 0;


}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* 온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다. 
이때, 회원들을 나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.
*/

vector<pair<int, string>> v; // v라는 vector 변수.

bool cmp(pair<int, string> a, pair<int, string> b) // 비교함수

{
	if (a.first < b.first) // 큰 수가 앞으로

		return true;
	 
	//나이가 같을 경우
	else if (a.first == b.first)

		return false;

	else {
		return false;
	}

}

int main() {
	int num, age;
	string name;
	int count = 0;

	cin >> num;
	v.resize(num); // v의 크기를 n으로 변경하고 확장되는 공간의 값을 기본값으로 초기화 한다. 
	// resize가 없으면 컴파일 에러가 발생했다.
	
	while (num != count) {
		cin >> age >> name;
		v[count].first = age;
		v[count].second = name;
		count++;
	}

	stable_sort(v.begin(), v.end(),cmp); // stable_sort로 정렬.
	// stable_sort 함수는 같은 값을 갖는 요소들의 원래 순서를 보존한다.

	for (int i = 0; i < num; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;

}
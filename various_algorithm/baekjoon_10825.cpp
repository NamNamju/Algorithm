#include <iostream>
#include <algorithm>
using namespace std;

/*
현이네 반 학생 N명의 이름과 국어, 영어, 수학 점수가 주어진다. 
이때, 다음과 같은 조건으로 학생의 성적을 정렬하는 프로그램을 작성하시오.

1. 국어 점수가 감소하는 순서로
2. 국어 점수가 같으면 영어 점수가 증가하는 순서로
3. 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
4. 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 
(단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다.)
*/

struct score { // 구조체로 이름과 점수 저장.
	int lang, eng, math;
	string name;
};

bool cmp(const score& a, const score& b) { // 비교함수

	if (a.lang > b.lang) return true; // 국어 점수 비교
	else if (a.lang == b.lang) {
		if (a.eng == b.eng) { // 영어 점수 비교
			if (a.math == b.math) { // 수학 점수 비교

				return a.name < b.name; // 이름 비교
			}
			else return a.math > b.math;
		}
		else return a.eng < b.eng;

	}

	else return false;
}
int main() {

	int num;
	int lang, eng, math;
	string name;
	int count = 0;

	cin >> num;

	score sc[100000]; // 10만 이하

	while (num != count) {
		cin >> sc[count].name >> sc[count].lang >> sc[count].eng >> sc[count].math;
		count++;
	}

	stable_sort(sc, sc + num, cmp); // stable_sort 함수 이용.

	for (int i = 0; i < num; i++) {
		cout << sc[i].name << "\n";
	}
	return 0;
}
#include <iostream>
using namespace std;

// 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.

int main() {
	int month, day;
	int thirtyOne = 0; // 31일까지인 월
	int thirty = 0; // 30일까지인 월
	int twenty = 0; // 28일까지인 월
	string week[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

	cin >> month >> day;

	for (int i = 1; i < month; i++) { // 1부터 (month -1)까지 check
		if (i == 4 || i ==  6 || i == 9 || i == 11) thirty++;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i== 12) thirtyOne++;
		if (i == 2) twenty++;
	}

	day = thirty * 30 + thirtyOne * 31 + twenty * 28 + day; // 총 day 수를 계산
	cout << week[day % 7] << endl; // 7로 나눈 나머지에 따라 요일이 출력.
	return 0;

}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* 2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, 
y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
*/

int main() {
	pair <int, int> vec[100000]; // pair class를 이용
	int count = 0;
	int num, a, b;

	cin >> num;

	while (num != count) { 
		cin >> a >> b;
		vec[count].first= b; // 11650과 반대로 앞의 원소에는 y좌표를, 뒤의 원소에는 x좌표를 저장한다.
		vec[count].second = a;
		count++;
	}

	sort(vec, vec + num); // sort를 이용하여 오름차순 정렬

	for (int i = 0; i < num; i++) {
		cout << vec[i].second<< " " << vec[i].first << endl;
	}

	return 0;

}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* 2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로,
   x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오. */

int main() {
	int num, a, b;
	int count = 0;

	pair <int, int> vec[100000]; // pair class를 이용하여 묶어주는 vec를 만든다.
	cin >> num; // 개수

	while (num != count) {
		cin >> a >> b; // a와 b를 입력 받는다. 
		vec[count].first = a; // 첫번째 인자
		vec[count].second = b; // 두번째 인자
		count++;
	}

	sort(vec,vec + num); // vec 정렬
	

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", vec[i].first, vec[i].second);
	}

	return 0;
}
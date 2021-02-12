#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

/*
준규는 숫자 카드 N장을 가지고 있다. 숫자 카드에는 정수가 하나 적혀있는데, 적혀있는 수는 -2의 62승보다 크거나 같고, 
2의 62승보다 작거나 같다.
준규가 가지고 있는 카드가 주어졌을 때, 가장 많이 가지고 있는 정수를 구하는 프로그램을 작성하시오. 
만약, 가장 많이 가지고 있는 정수가 여러 가지라면, 작은 것을 출력한다.
*/

int main() {

	long long arr[100001] = { 0, }; // 2의 62승이기 때문에 long long으로 선언한다.
	int num;
	int count = 1; // 카운트
	int anscount = 1; // 카운트 한 것들 중 정답 (가장 많이 나온 수의 횟수)

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%lld", &arr[i]); // long long이기 때문에 lld로 입력받는다.
	}

	sort(arr, arr + num); // 먼저 정렬한다.

	long long ans = arr[0];

	for (int i = 1; i < num; i++) {

		if (arr[i] == arr[i - 1]) { // 만약 해당 수와 직전의 수가 같다면
			count++; // 횟수를 세준다.

		}
		else count = 1;

		if (anscount < count) { // 만약 정답횟수보다 방금 센 횟수가 더 크다면
			anscount = count; // 정답 횟수에 방금 센 횟수를 저장.
			ans = arr[i];
		}
	}

	printf("%lld", ans);

	return 0;
}
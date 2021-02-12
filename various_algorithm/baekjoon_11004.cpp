#include <iostream>
#include <algorithm>
using namespace std;

// 수 N개 A1, A2, ..., AN이 주어진다. A를 오름차순 정렬했을 때, 앞에서부터 K번째 있는 수를 구하는 프로그램을 작성하시오.

bool cmp(const long long& a, const long long& b) { // 비교 함수
	return a < b;
}

int main() {
	long long num;
	long long ordnum;

	long long arr[5000001] = { 0, };
	scanf("%lld %lld", &num, &ordnum);

	for (long long i = 0; i < num; i++) { // 입력 받음
		scanf("%lld", &arr[i]);
	}
	sort(arr, arr + num, cmp); // 정렬
	printf("%lld", arr[ordnum - 1]); // 0번째는 입력했을 때 첫번째가 되기 때문에 입력한 수에서 -1을 해준다.

	return 0;


}
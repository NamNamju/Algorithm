#include <iostream>
#include <algorithm>
using namespace std;

// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

int main() {
	int num;
	int count = 0;
	int arr[99] = {};
	scanf("%d", &num);

	while (num != count) { // num 개수만큼 숫자를 입력받는다.
		int a;
		scanf("%d", &a);
		arr[count] = a;
		count++;
	}
	
	sort(arr, arr + num); // STL을 이용하여 sort 정렬 (오름차순)

	for (int i = 0 ; i < num ; i++ ) { // 출력
		printf("%d\n", arr[i]);
	}

	return 0;

}
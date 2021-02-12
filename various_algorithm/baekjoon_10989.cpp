#include <iostream>
using namespace std;

// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
// 시간 제한과 메모리 제한이 있기 때문에 일반 정렬 방식과 다르다.

int main() {
	int num, n;
	int count = 0;
	int arr[10001] = { 0, }; // 10000보다 작거나 같은 자연수
	// 초기화를 안해주면 컴파일 에러가 일어난다.
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		
		scanf("%d", &n);
		arr[n]++; // n에 해당하는 위치에 1씩 추가됨.
	}
	
	for (int i = 1; i < 10001; i++) { // 10000보다 작거나 같은 자연수
	 	for (int j = 0; j < arr[i]; j++) // arr[i] 개수만큼 출력.
		{
			printf("%d\n", i);
		}
	}

	return 0;


}
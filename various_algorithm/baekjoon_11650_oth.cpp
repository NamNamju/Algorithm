#include <iostream>
#include <algorithm>
using namespace std;

/* 2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로,
   x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오. */

// 코드 제출 실패의 이유 - 이중 for문으로 인하여 n 제곱의 시간이 걸리게 된다. 10만개의 수이기 때문에 시간 초과 발생

int main() {
	int num, a, b;
	int count = 0;

	// array 생성

	int vec1[100000] = {};
	int vec2[100000] = {};

	scanf("%d", &num);

	while (num != count) {
		scanf("%d %d", &a, &b);
		vec1[count] = a;
		vec2[count] = b;
		count++;
	}

	sort(vec1, vec1 + num); // sort로 첫번째 array 정렬 (즉, x좌표)

	for (int i = 0; i < num; i++) {

		for (int j = i + 1; j < num; j++) {
			if (vec1[i] == vec1[j]) { // x좌표가 같을 경우
				if (vec2[i] > vec2[j]) { // y좌표를 비교하여 오름차순 정렬 - 선택정렬
					int temp = vec2[i];
					vec2[i] = vec2[j];
					vec2[j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", vec1[i], vec2[i]);
	}

	return 0;
}
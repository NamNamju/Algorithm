#include <stdio.h>

// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) { // 1부터 num까지의 합.
		sum += i;
	}

	printf("%d", sum); // 출력.

	return 0;
}
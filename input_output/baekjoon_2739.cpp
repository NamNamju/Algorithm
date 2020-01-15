#include <stdio.h>

// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

int main() {

	int num;
	scanf("%d", &num);

	for (int i = 1; i < 10; i++) { // 1부터 9까지
		printf("%d * %d = %d", num, i, num * i); // 곱셈
	}

	return 0;
}
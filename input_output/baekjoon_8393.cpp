#include <stdio.h>

// n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) { // 1���� num������ ��.
		sum += i;
	}

	printf("%d", sum); // ���.

	return 0;
}
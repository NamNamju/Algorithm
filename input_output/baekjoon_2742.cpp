#include <stdio.h>

// �ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	scanf("%d", &num);

	for (int i = num; i > 0; i--) { // num���� 1���� ���ʴ�� ���.
		printf("%d\n", i);
	}

	return 0;
}
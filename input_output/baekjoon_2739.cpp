#include <stdio.h>

// N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.

int main() {

	int num;
	scanf("%d", &num);

	for (int i = 1; i < 10; i++) { // 1���� 9����
		printf("%d * %d = %d", num, i, num * i); // ����
	}

	return 0;
}
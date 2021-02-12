#include <iostream>
#include <algorithm>
using namespace std;

/* 2���� ��� ���� �� N���� �־�����. ��ǥ�� x��ǥ�� �����ϴ� ������,
   x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

// �ڵ� ���� ������ ���� - ���� for������ ���Ͽ� n ������ �ð��� �ɸ��� �ȴ�. 10������ ���̱� ������ �ð� �ʰ� �߻�

int main() {
	int num, a, b;
	int count = 0;

	// array ����

	int vec1[100000] = {};
	int vec2[100000] = {};

	scanf("%d", &num);

	while (num != count) {
		scanf("%d %d", &a, &b);
		vec1[count] = a;
		vec2[count] = b;
		count++;
	}

	sort(vec1, vec1 + num); // sort�� ù��° array ���� (��, x��ǥ)

	for (int i = 0; i < num; i++) {

		for (int j = i + 1; j < num; j++) {
			if (vec1[i] == vec1[j]) { // x��ǥ�� ���� ���
				if (vec2[i] > vec2[j]) { // y��ǥ�� ���Ͽ� �������� ���� - ��������
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
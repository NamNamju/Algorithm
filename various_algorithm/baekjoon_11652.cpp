#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

/*
�رԴ� ���� ī�� N���� ������ �ִ�. ���� ī�忡�� ������ �ϳ� �����ִµ�, �����ִ� ���� -2�� 62�º��� ũ�ų� ����, 
2�� 62�º��� �۰ų� ����.
�ر԰� ������ �ִ� ī�尡 �־����� ��, ���� ���� ������ �ִ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
����, ���� ���� ������ �ִ� ������ ���� �������, ���� ���� ����Ѵ�.
*/

int main() {

	long long arr[100001] = { 0, }; // 2�� 62���̱� ������ long long���� �����Ѵ�.
	int num;
	int count = 1; // ī��Ʈ
	int anscount = 1; // ī��Ʈ �� �͵� �� ���� (���� ���� ���� ���� Ƚ��)

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%lld", &arr[i]); // long long�̱� ������ lld�� �Է¹޴´�.
	}

	sort(arr, arr + num); // ���� �����Ѵ�.

	long long ans = arr[0];

	for (int i = 1; i < num; i++) {

		if (arr[i] == arr[i - 1]) { // ���� �ش� ���� ������ ���� ���ٸ�
			count++; // Ƚ���� ���ش�.

		}
		else count = 1;

		if (anscount < count) { // ���� ����Ƚ������ ��� �� Ƚ���� �� ũ�ٸ�
			anscount = count; // ���� Ƚ���� ��� �� Ƚ���� ����.
			ans = arr[i];
		}
	}

	printf("%lld", ans);

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

// N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num;
	int count = 0;
	int arr[99] = {};
	scanf("%d", &num);

	while (num != count) { // num ������ŭ ���ڸ� �Է¹޴´�.
		int a;
		scanf("%d", &a);
		arr[count] = a;
		count++;
	}
	
	sort(arr, arr + num); // STL�� �̿��Ͽ� sort ���� (��������)

	for (int i = 0 ; i < num ; i++ ) { // ���
		printf("%d\n", arr[i]);
	}

	return 0;

}
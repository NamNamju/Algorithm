#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

// ���ĵǾ��ִ� �� �迭 A�� B�� �־�����. �� �迭�� ��ģ ���� �����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num1, num2;
	int a;
	vector <int> vec;

	scanf("%d %d", &num1, &num2); // �� �迭�� ������ �Է¹���.

	for (int i = 0; i < num1 + num2; i++) { // �ѹ��� �迭�� �Է¹ް� ���Ϳ� ����.

		scanf("%d", &a);
		vec.push_back(a);
	}

	sort(vec.begin(), vec.end()); // sort�� ����.

	for (int i = 0; i < vec.size(); i++) {
		printf("%d ", vec[i]);
	}
	return 0;
}
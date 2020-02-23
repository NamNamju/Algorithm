#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

// 정렬되어있는 두 배열 A와 B가 주어진다. 두 배열을 합친 다음 정렬해서 출력하는 프로그램을 작성하시오.

int main() {
	int num1, num2;
	int a;
	vector <int> vec;

	scanf("%d %d", &num1, &num2); // 두 배열의 개수를 입력받음.

	for (int i = 0; i < num1 + num2; i++) { // 한번에 배열을 입력받고 벡터에 저장.

		scanf("%d", &a);
		vec.push_back(a);
	}

	sort(vec.begin(), vec.end()); // sort로 정렬.

	for (int i = 0; i < vec.size(); i++) {
		printf("%d ", vec[i]);
	}
	return 0;
}
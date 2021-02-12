#include <iostream>
using namespace std;

// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

int main() {
	int num1, num2;
	int numArr[999] = { };
	int count = 0;

	cin >> num1; // 숫자의 개수

	while (count != num1) { // 숫자만큼 입력 받음.
		cin >> num2;
		numArr[count] = num2; // 배열에 저장
		count++;
	}

	// 초기 설정
	int max = numArr[0];
	int min = numArr[0];


	for (int i = 1; i < num1; i++) {

		if (max < numArr[i]) max = numArr[i]; // numArr[i]가 클 경우 max에 저장
		if (min > numArr[i]) min = numArr[i]; // numArr[i]가 작을 경우 min에 저장
	}
	cout << min << " " << max;

	return 0;
}
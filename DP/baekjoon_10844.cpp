#include <iostream>
using namespace std;

// N이 주어질 때, 길이가 N인 계단 수가 총 몇 개 있는지 구하는 프로그램을 작성하시오.
// 동적 계산법

int main() {
	int num;
	long long sum = 0;
	long long arr[101][10] = { 0, }; // 초기화를 하지 않아서 지속적으로 오류 발생

	cin >> num;

	for (int i = 1; i < 10; i++) {
		arr[1][i] = 1; // n = 1 일 경우 초기값
	}

	for (int i = 2; i <= num; i++) { // i = 길이
		for (int j = 0; j < 10; j++) { // j = 수의 맨 뒷자리
			if (j == 0) arr[i][j] = arr[i - 1][j + 1] % 1000000000; // 끝자리가 0일 경우 앞의 수가 1이어야 됨.
			else if (j == 9) arr[i][j] = arr[i - 1][j - 1] % 1000000000; // 끝자리가 9일 경우 앞으 수가 8이어야 됨.
			else arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}
	for (int i = 0; i < 10; i++) {
		sum += arr[num][i];
	}

	cout << sum % 1000000000;

	return 0;
	
}
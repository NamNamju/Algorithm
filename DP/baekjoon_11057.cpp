#include <iostream>
#include <math.h>
using namespace std;

// 수의 길이 N이 주어졌을 때, 오르막 수의 개수를 구하는 프로그램을 작성하시오. 수는 0으로 시작할 수 있다.
// 동적 계산법 이용

int main() {
	int num;
	long long sum = 0;
	long long arr[1001][10] = { 0, };
	
	cin >> num;
	
	for (int i = 0; i < 10; i++) { // num = 1 일 때 초기값.
		arr[1][i] = 1;
	}

	for (int i = 2; i <= num; i++) {
		for (int j = 0; j <= 9; j++) {
			int t = j; // t에 j 저장.
			while ( t < 10) {
				arr[i][j] += arr[i - 1][t] % 10007; // 이전 num의 수를 모두 더함.
				t++;
			}
			
		}
	}

	for(int i = 0; i < 10; i++) {
		sum += arr[num][i] % 10007;
	}

	cout << sum % 10007;

	return 0;
}
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

int main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2); // M과 N 입력 받음.

	for (int i = num1; i <= num2; i++) {

		bool primeNum = true; // true로 설정.

		if (i > 1) { // 1보다 클 경우 (1은 소수X)
			for (int j = 2; j <= sqrt(i); j++) { // 에라토스테네스의 접근

				/*
				주어진 자연수 N이 소수이기 위한 필요충분 조건은
				N이 N의 제곱근보다 크지 않은 어떤 소수로도 나눠지지 않는다.
				*/

				if (i % j == 0)
				{
					primeNum = false;
					break;
				}


			}

			if (primeNum) printf("%d\n", i); // 소수일 경우 출력.
		}
	}

	return 0;
}
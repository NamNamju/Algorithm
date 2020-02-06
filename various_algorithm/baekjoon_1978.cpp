#include <iostream>
#include <math.h>
using namespace std;

// 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

int main() {
	int numCount;
	int num;
	int count = 0;
	cin >> numCount;

	for (int i = 0; i < numCount; i++) {
		cin >> num;

		bool primeNum = true; // true로 설정.

		if (num > 1) { // 1보다 클 경우 (1은 소수X)
			for (int i = 2; i <= sqrt(num); i++) { // 에라토스테네스의 접근

				/*
				주어진 자연수 N이 소수이기 위한 필요충분 조건은 
				N이 N의 제곱근보다 크지 않은 어떤 소수로도 나눠지지 않는다.
				*/

				if (num % i == 0)
				{
					primeNum = false;
					break;
				}


			}
			if (primeNum) count++; // 소수일 경우 세준다.
		}

		

	}

	cout << count;

	return 0;
}
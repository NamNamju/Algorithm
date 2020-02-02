#include <iostream>
using namespace std;

// 두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

int main() {
	int num1, num2;	
	int max = 0;
	int min = 0;
	int mnum, nnum;
	int count = 0;
	cin >> count;

	while (count>0) {

		cin >> num1 >> num2;

		// 최대공약수를 위한 수 저장.
		if (num1 > num2)
		{
			mnum = num2;
			nnum = num1;
		}
		else {
			mnum = num1;
			nnum = num2;
		}

		for (int i = 1; i <= mnum; i++) { // 최대공약수는 둘 중 작은 수까지만 범위.

			if (mnum % i == 0) { // 나머지가 0일 경우
				if (nnum % i == 0) {
					max = i;
				}
			}
		}

		cout << mnum * nnum / max << endl; // 최소공배수는 두 수의 곱에 최대공약수로 나눈 것.
		count--;
	}

	

	return 0;
}
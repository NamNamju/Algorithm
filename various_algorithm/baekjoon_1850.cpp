#include <iostream>
using namespace std;

// 두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.
// '유클리드 호제법'을 이용한다.

long long GCD(long long a, long long b) { // 유클리드 호제법 : 큰 수에서 작은 수를 나눈 나머지 이용
	if (b == 0) return a;
	
	return GCD(b, a % b);
}

int main() {
	long long num1, num2, mnum, nnum;	

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

	long long a = GCD(mnum, nnum);

	while (a--) {
		cout << "1";
	}

	return 0;
}
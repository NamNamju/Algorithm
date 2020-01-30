#include <iostream>
using namespace std;

// 네 자연수 A, B, C, D가 주어진다. 이때, A와 B를 붙인 수와 C와 D를 붙인 수의 합을 구하는 프로그램을 작성하시오.

int main() {
	// 입력 받을 수
	int anum1 = 0;
	int anum2 = 0;
	int bnum1 = 0;
	int bnum2 = 0;
	cin >> anum1 >> anum2 >> bnum1 >> bnum2;

	// 자릿수를 세기 위해서 num1과 num2에 B, D에 해당하는 수 저장
	int num1 = anum2;
	int num2 = bnum2;

	// 자릿수
	int count1 = 0;
	int count2 = 0;

	// 자릿수 세기		
		do {
			num1 /= 10;
			count1++;

		} while (num1 > 0);

		do {
			num2 /= 10;
			count2++;

		} while (num2 > 0);

	// 계산
	cout << (long long)(anum1 * pow((double)10, (double)count1) + anum2) + 
		(long long)(bnum1 * pow((double)10, (double)count2) + bnum2) << endl;

	return 0;

}
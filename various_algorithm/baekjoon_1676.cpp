#include <iostream>
#include <string>
using namespace std;

// N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
// 처음에 단순히 팩토리알을 계산 후 0을 찾았는데, 범위를 넘어선다.
// 풀이 : 2와 5가 있는 개수만큼 0이 존재. (2*5 = 10, 2*2*5*5 = 100 ...) 팩토리얼을 계산할 때 2가 5보다 많으므로 5만 세준다.

int main() {

	int num;
	int count = 0;

	cin >> num;

	for (int i = 1; i <= num; i++) {
		int temp = i; // temp에 저장.
		while (temp != 1) {
			if (temp % 5 == 0) // temp를 5로 나눈 나머지가 0일 경우
			{
				count++;
				temp /= 5;
			}
			else break;
		}
	}

	cout << count;
	return 0;
}
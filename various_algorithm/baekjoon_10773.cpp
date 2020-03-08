#include <iostream>
#include <vector>
using namespace std;

/* 
재현이는 잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.
재민이는 이렇게 모든 수를 받아 적은 후 그 수의 합을 알고 싶어 한다. 재민이를 도와주자
!*/

int main() {
	int K; // 수를 입력 받는다.
	int a; // vec에 입력할 수.
	long long sum = 0; // 합
	vector <int> vec;

	cin >> K;

	while (K--) {
		cin >> a;

		vec.push_back(a);

		if (a == 0) { // 0일 경우
			vec.pop_back();
			vec.pop_back();
		}
	}

	for (int i : vec) {
		sum += i;
	}

	cout << sum;

	return 0;
}
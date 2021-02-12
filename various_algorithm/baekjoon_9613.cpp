#include <iostream>
using namespace std;

// 양의 정수 n개가 주어졌을 때, 가능한 모든 쌍의 GCD의 합을 구하는 프로그램을 작성하시오.

int GCD(int a, int b) { // 유클리드 호제법
	if ( b == 0) return a;

	return GCD(b, a % b);
}


int main() {
	int count;
	int num;
	long long sum;

	cin >> count;

	while (count--) { // 개수
		int arr[100] = { 0, };
		sum = 0;
		cin >> num;

		for (int i = 0; i < num; i++) { // 원소 입력
			cin >> arr[i];
		}

		for (int i = 0; i < num-1; i++) {
			for (int j = i+1; j < num; j++) {

				int a = arr[i];
				int b = arr[j];
				sum += GCD(a,b);
			}
			
		}
		
		cout << sum << endl;
		
	}

	return 0;

}
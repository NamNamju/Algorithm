#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

int main() {
	int num1, num2;
	vector <int> vec;
	cin >> num1 >> num2;
	int max = 0;
	int min = 0;
	int mnum;
	int nnum;

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
			if (nnum % i == 0 ){
				max = i;
				}
		}
	}
	
	for (int i = 1; i < 10000; i++) { // 벡터에 num1과 i를 곱한 수 저장.
		vec.push_back(num1 * i);
	}
	for (int i = 1; i < 10000; i++) {
		int a = num2 * i;
		if (find(vec.begin(), vec.end(), a) != vec.end()) { // 벡터에 같은 수가 있는지 찾는다.
			min = a;
			break;
		}
	}

	cout << max << endl;
	cout << min << endl;

	return 0;
}
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// A진법으로 나타낸 숫자를 B진법으로 변환시켜주는 프로그램을 작성하기로 하였다. 
// A진법 -> 10진법 -> B진법 절차를 이용.

int main() {
	int futureNum, curNum;
	int count;
	int num;
	int sum = 0;
	int arr[25] = { 0, };
	vector <int> vec;

	cin >> futureNum >> curNum >> count; // 입력 받음

	for (int i = 0; i < count; i++) { // 수를 입력 받음
		cin >> arr[i];
	}

	for (int i = 0; i < count; i++) { // 10진법 변환
		sum += arr[i] * pow(futureNum, count - i - 1);
	}

	while (sum != 0) { // B진법 변환
		int r = sum % curNum;
		sum /= curNum;
		vec.push_back(r);
	}

	reverse(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	return 0;
}
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// A�������� ��Ÿ�� ���ڸ� B�������� ��ȯ�����ִ� ���α׷��� �ۼ��ϱ�� �Ͽ���. 
// A���� -> 10���� -> B���� ������ �̿�.

int main() {
	int futureNum, curNum;
	int count;
	int num;
	int sum = 0;
	int arr[25] = { 0, };
	vector <int> vec;

	cin >> futureNum >> curNum >> count; // �Է� ����

	for (int i = 0; i < count; i++) { // ���� �Է� ����
		cin >> arr[i];
	}

	for (int i = 0; i < count; i++) { // 10���� ��ȯ
		sum += arr[i] * pow(futureNum, count - i - 1);
	}

	while (sum != 0) { // B���� ��ȯ
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
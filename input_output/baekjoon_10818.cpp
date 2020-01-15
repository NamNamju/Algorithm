#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int numArr[6] = { };
	int count = 0;

	cin >> num1;

	while (count != num1) {
		cin >> num2;
		numArr[count] = num2;
		count++;
	}

	int max = numArr[0];
	int min = numArr[0];

	for (int i = 1; i < num1; i++) {

		if (max < numArr[i]) max = numArr[i];
		if (min > numArr[i]) min = numArr[i];
	}
	cout << min << " " << max;

	return 0;
}
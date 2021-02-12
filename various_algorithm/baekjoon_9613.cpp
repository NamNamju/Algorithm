#include <iostream>
using namespace std;

// ���� ���� n���� �־����� ��, ������ ��� ���� GCD�� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int GCD(int a, int b) { // ��Ŭ���� ȣ����
	if ( b == 0) return a;

	return GCD(b, a % b);
}


int main() {
	int count;
	int num;
	long long sum;

	cin >> count;

	while (count--) { // ����
		int arr[100] = { 0, };
		sum = 0;
		cin >> num;

		for (int i = 0; i < num; i++) { // ���� �Է�
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
#include <iostream>
#include <string>
using namespace std;

// N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	string str;
	int sum = 0;
	int num;

	cin >> num;
	cin >> str;

	for (int i = 0; i < num; i++) {
		int m = str[i] - '0'; // ������ ��ȯ
		sum += m; // str[i]�� ��� ���Ѵ�.
	}

	cout << sum << endl;

	return 0;

}
#include <iostream>
#include <string>
using namespace std;

/*
���ڿ� N���� �־�����. �̶�, ���ڿ��� ���ԵǾ� �ִ� �ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ���ڿ��� ���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�.
*/

int main() {
	int arr[4] = { 0, };
	string str;

	while (getline(cin, str)) { // ���ڿ��� �Է¹޴´�. (���� ����)
		if (str.length() == 0) break; // ���� ���ڿ��� ����� ��� ����.

		// �迭�� ���Ҹ� 0���� �ʰ�

		arr[0] = 0;
		arr[1] = 0;
		arr[2] = 0;
		arr[3] = 0;

		for (int i = 0; i < str.size(); i++) {

			for (char c = 'a'; c <= 'z'; c++) { // ���ĺ� �ҹ���
				if (str[i] == c) arr[0]++;
				
			}
			for (char s = 'A'; s <= 'Z'; s++) { // ���ĺ� �빮��
				if (str[i] == s) arr[1]++;
			}
			for (char c = '0'; c <= '9'; c++) { // ����
				if (str[i] == c) arr[2]++;
			}
			if (str[i] == ' ') arr[3]++; // ����
			
		}

		for (int i = 0; i < 4; i++) { // ���
			cout << arr[i] << " ";
		}
		cout << endl;

	}

	return 0;
}
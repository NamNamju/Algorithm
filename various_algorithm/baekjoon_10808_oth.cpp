#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/* ���ڿ� N���� �־�����. �̶�, ���ڿ��� ���ԵǾ� �ִ� �ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ���ڿ��� ���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�.*/

int main() {
	string str;
	cin >> str;

	for (char a = 'a'; a <= 'z'; a++) { // 'a' ���� 'z'����
		cout << count(str.begin(), str.end(), a) << " "; // ������ ���� �ٷ� �����.
	}

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

// ���ڿ��� �־����� ��, "ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	string a;

	getline(cin, a); // ���� �Է¹���
		
	for (int i = 0; i < a.length(); i++) {

		if ((a[i] >= 'a' && a[i] <= 'a' + 12) || (a[i] >= 'A' && a[i] <= 'A' + 12)) // �ƽ�Ű�ڵ� �̿�. A���� �ӱ���
		{
			cout << (char)(a[i] + 13);
		}
		else if ((a[i] >= '0' && a[i] <= '9') || a[i] == ' ') // ���ڳ� ������ ���
		{
			cout << a[i];
		}
		else // M���� Z����.
		{
			cout << (char)(a[i] - 13);
		}

	}

	return 0;

}
#include <iostream>
#include <string>
using namespace std;

// �Է� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	string a;
	int count = 0;
	while (getline(cin,a)){ // getline�� ���鵵 �Բ� �����.
		if (a == " ") break;
		// ������ �ƴϱ� ������ break�� ���ش�.

		cout << a << endl;
	}

	return 0;

}
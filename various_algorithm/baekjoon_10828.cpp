#include <iostream>
#include <vector>
using namespace std;

// ������ �����ϴ� ������ ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num, pnum;
	string str;
	vector <int> vec;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") { // push�� ��� push�� number�� �Է�
			cin >> pnum;
		}

		if (str == "push") { // push�� ���
			vec.insert(vec.begin(), pnum); // vec �տ� ���� ����.
		}
		else if (str == "top") { // top�� ���
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[0] << "\n";
		}

		else if (str == "size") cout << vec.size() << "\n"; // size�� ���

		else if (str == "empty") { // empty�� ���
			if (vec.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

		else // pop�� ���
		{
			if (vec.size() == 0) cout << -1 << "\n";
			else {
				cout << vec[0] << endl;
				vec.erase(vec.begin());
			}
		}
	}



	return 0;
}
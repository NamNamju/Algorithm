#include <iostream>
#include <vector>
using namespace std;

// ������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// baekjoon_10828�� �ٸ� ���� push ���� ���� X�� ���� �ƴ� �ڿ� �ִ´�.

int main() {
	int num,pnum;
	string str;
	vector <int> vec;
	cin >> num;

	for (int i = 0; i < num; i++) {

		cin >> str;
		if (str == "push") cin >> pnum;
		if (str == "push") { // push�� ���
			vec.push_back(pnum); // vec �տ� ���� ����.
		}
		else if (str == "front") { // front�� ���
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[0] << "\n";
		}
		else if (str == "back") { // back�� ���
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[vec.size() - 1] << "\n";
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
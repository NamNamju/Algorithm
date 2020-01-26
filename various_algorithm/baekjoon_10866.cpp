#include <iostream>
#include <vector>
using namespace std;

// ������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	int num, pnum;
	string str;
	vector <int> vec;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push_front" || str == "push_back") { // push�� ��� push�� number�� �Է�
			cin >> pnum;
		}
		

		if (str == "push_front") { // push_front�� ���
			vec.insert(vec.begin(), pnum); // vec �տ� ���� ����.
		}
		else if (str == "push_back") { // push_back�� ���
			vec.push_back(pnum); // vec �ڿ� ���� ����.
		}
		else if (str == "front") { // front�� ���
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[0] << "\n";
		}
		else if (str == "back") { // back�� ���
			if (vec.size() == 0) cout << "-1" << "\n";
			else cout << vec[vec.size()-1] << "\n";
		}
		else if (str == "size") cout << vec.size() << "\n"; // size�� ���
		else if (str == "empty") { // empty�� ���
			if (vec.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

		else if (str == "pop_front") // pop_front�� ���
		{
			if (vec.size() == 0) cout << -1 << "\n";
			else {
				cout << vec[0] << endl;
				vec.erase(vec.begin());
			}
		}
		else // pop_back�� ���
		{
			if (vec.size() == 0) cout << -1 << "\n";
			else {
				cout << vec[vec.size() - 1] << endl;
				vec.erase(vec.end()-1);
			}
		}
	}



	return 0;
}
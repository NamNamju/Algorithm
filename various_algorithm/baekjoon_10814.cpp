#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* �¶��� ������ ������ ������� ���̿� �̸��� ������ ������� �־�����. 
�̶�, ȸ������ ���̰� �����ϴ� ������, ���̰� ������ ���� ������ ����� �տ� ���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

vector<pair<int, string>> v; // v��� vector ����.

bool cmp(pair<int, string> a, pair<int, string> b) // ���Լ�

{
	if (a.first < b.first) // ū ���� ������

		return true;
	 
	//���̰� ���� ���
	else if (a.first == b.first)

		return false;

	else {
		return false;
	}

}

int main() {
	int num, age;
	string name;
	int count = 0;

	cin >> num;
	v.resize(num); // v�� ũ�⸦ n���� �����ϰ� Ȯ��Ǵ� ������ ���� �⺻������ �ʱ�ȭ �Ѵ�. 
	// resize�� ������ ������ ������ �߻��ߴ�.
	
	while (num != count) {
		cin >> age >> name;
		v[count].first = age;
		v[count].second = name;
		count++;
	}

	stable_sort(v.begin(), v.end(),cmp); // stable_sort�� ����.
	// stable_sort �Լ��� ���� ���� ���� ��ҵ��� ���� ������ �����Ѵ�.

	for (int i = 0; i < num; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;

}
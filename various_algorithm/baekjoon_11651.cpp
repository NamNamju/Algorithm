#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* 2���� ��� ���� �� N���� �־�����. ��ǥ�� y��ǥ�� �����ϴ� ������, 
y��ǥ�� ������ x��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main() {
	pair <int, int> vec[100000]; // pair class�� �̿�
	int count = 0;
	int num, a, b;

	cin >> num;

	while (num != count) { 
		cin >> a >> b;
		vec[count].first= b; // 11650�� �ݴ�� ���� ���ҿ��� y��ǥ��, ���� ���ҿ��� x��ǥ�� �����Ѵ�.
		vec[count].second = a;
		count++;
	}

	sort(vec, vec + num); // sort�� �̿��Ͽ� �������� ����

	for (int i = 0; i < num; i++) {
		cout << vec[i].second<< " " << vec[i].first << endl;
	}

	return 0;

}
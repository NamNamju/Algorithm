#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* 2���� ��� ���� �� N���� �־�����. ��ǥ�� x��ǥ�� �����ϴ� ������,
   x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

int main() {
	int num, a, b;
	int count = 0;

	pair <int, int> vec[100000]; // pair class�� �̿��Ͽ� �����ִ� vec�� �����.
	cin >> num; // ����

	while (num != count) {
		cin >> a >> b; // a�� b�� �Է� �޴´�. 
		vec[count].first = a; // ù��° ����
		vec[count].second = b; // �ι�° ����
		count++;
	}

	sort(vec,vec + num); // vec ����
	

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", vec[i].first, vec[i].second);
	}

	return 0;
}
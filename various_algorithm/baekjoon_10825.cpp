#include <iostream>
#include <algorithm>
using namespace std;

/*
���̳� �� �л� N���� �̸��� ����, ����, ���� ������ �־�����. 
�̶�, ������ ���� �������� �л��� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

1. ���� ������ �����ϴ� ������
2. ���� ������ ������ ���� ������ �����ϴ� ������
3. ���� ������ ���� ������ ������ ���� ������ �����ϴ� ������
4. ��� ������ ������ �̸��� ���� ������ �����ϴ� ������ 
(��, �ƽ�Ű �ڵ忡�� �빮�ڴ� �ҹ��ں��� �����Ƿ� ���������� �տ� �´�.)
*/

struct score { // ����ü�� �̸��� ���� ����.
	int lang, eng, math;
	string name;
};

bool cmp(const score& a, const score& b) { // ���Լ�

	if (a.lang > b.lang) return true; // ���� ���� ��
	else if (a.lang == b.lang) {
		if (a.eng == b.eng) { // ���� ���� ��
			if (a.math == b.math) { // ���� ���� ��

				return a.name < b.name; // �̸� ��
			}
			else return a.math > b.math;
		}
		else return a.eng < b.eng;

	}

	else return false;
}
int main() {

	int num;
	int lang, eng, math;
	string name;
	int count = 0;

	cin >> num;

	score sc[100000]; // 10�� ����

	while (num != count) {
		cin >> sc[count].name >> sc[count].lang >> sc[count].eng >> sc[count].math;
		count++;
	}

	stable_sort(sc, sc + num, cmp); // stable_sort �Լ� �̿�.

	for (int i = 0; i < num; i++) {
		cout << sc[i].name << "\n";
	}
	return 0;
}
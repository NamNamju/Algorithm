#include <iostream>
using namespace std;

/* 
E, S, M�� �־�����, 1���� �ر԰� ��� ���󿡼� 1 1 1�϶�, 
�ر԰� ��� ���󿡼� E S M�� �츮�� �˰� �ִ� ������ �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main() {

	int E, S, M;
	int count = 1;
	 
	cin >> E >> S >> M; // �Է¹޴´�.

	while (E != 1 || S != 1 || M != 1) { // E = 1, S = 1, M = 1 �� ������ ����Ѵ�.
		E--;
		S--;
		M--;

		// 0�� �� ��� �� �� ����.
		if (E == 0) E = 15;
		if (S == 0) S = 28;
		if (M == 0) M = 19;

		count++; // Ƚ�� ����.

	}

	cout << count;

	return 0;
}
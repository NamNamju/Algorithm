#include <iostream>
#include <algorithm>
using namespace std;

// �� N�� A1, A2, ..., AN�� �־�����. A�� �������� �������� ��, �տ������� K��° �ִ� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

bool cmp(const long long& a, const long long& b) { // �� �Լ�
	return a < b;
}

int main() {
	long long num;
	long long ordnum;

	long long arr[5000001] = { 0, };
	scanf("%lld %lld", &num, &ordnum);

	for (long long i = 0; i < num; i++) { // �Է� ����
		scanf("%lld", &arr[i]);
	}
	sort(arr, arr + num, cmp); // ����
	printf("%lld", arr[ordnum - 1]); // 0��°�� �Է����� �� ù��°�� �Ǳ� ������ �Է��� ������ -1�� ���ش�.

	return 0;


}
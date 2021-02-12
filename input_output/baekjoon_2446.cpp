#include <iostream>

using namespace std;

// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

int main()
{
	int num;

	cin >> num;

	// 윗 부분 ( 별 하나인 부분까지)
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++) // 공백 출력
			cout << " ";

		for (int j = 0; j < 2 * (num - i) - 1; j++) // 별 출력
			cout << "*";

		cout << endl;
	}

	// 아랫 부분
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 2; j++) // 공백 출력
			cout << " ";

		for (int j = 0; j < 2 * (i + 2) - 1; j++) // 별 출력
			cout << "*";

		cout << endl;
	}
	

	return 0;
}
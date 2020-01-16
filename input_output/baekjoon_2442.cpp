#include <iostream>
using namespace std;

/*
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.
*/

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) // num의 수만큼 줄을 출력
	{
		for (int j = 1; j <= num - i; j++) // 공백 출력
		{
			cout << " ";
		}
		for (int j = 1; j <= i * 2 - 1; j++) // 별 출력
		{
			cout << "*";
		}

		// 뒤의 공백은 출력하면 안된다.

		cout << endl;
	}

	return 0;


}
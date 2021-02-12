#include <iostream>
using namespace std;

// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) { // 총 num만큼의 줄 수를 출력
		for (int j = 0; j < num - i - 1; j++) { // 앞 쪽의 공백
			cout << " ";
		}

		for (int j = 0; j < 2 * (i+1) - 1; j++) { // 별이 나오기 시작하는 부분

			if (j % 2 == 1) cout << " "; // 중간 중간의 공백
			else cout << "*"; // 별 출력
		}
		
		cout << endl;
	}

	return 0;


}
#include <iostream>
#include <string>
using namespace std;

// 입력 받은 대로 출력하는 프로그램을 작성하시오.

int main() {
	string a;
	int count = 0;
	while (getline(cin,a)){ // getline은 공백도 함께 출력함.
		if (a == " ") break;
		// 빈줄이 아니기 때문에 break를 해준다.

		cout << a << endl;
	}

	return 0;

}
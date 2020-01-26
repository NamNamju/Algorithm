#include <iostream>
using namespace std;

// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

int main() {
	char str[101] = { 0,}; // 단어 S
	int arr[26] = { 0, }; // 알파벳

	cin >> str;

	for (int i = 0; i < 101; i++) { // 단어 하나씩 for문을 돌린다.
		if (str[i] == 'a') arr[0]++; // 단어가 a일 경우 a의 횟수 추가. 이하 동일.
		else if (str[i] == 'b') arr[1]++;
		else if (str[i] == 'c') arr[2]++;
		else if (str[i] == 'd') arr[3]++;
		else if (str[i] == 'e') arr[4]++;
		else if (str[i] == 'f') arr[5]++;
		else if (str[i] == 'g') arr[6]++;
		else if (str[i] == 'h') arr[7]++;
		else if (str[i] == 'i') arr[8]++;
		else if (str[i] == 'j') arr[9]++;
		else if (str[i] == 'k') arr[10]++;
		else if (str[i] == 'l') arr[11]++;
		else if (str[i] == 'm') arr[12]++;
		else if (str[i] == 'n') arr[13]++;
		else if (str[i] == 'o') arr[14]++;
		else if (str[i] == 'p') arr[15]++;
		else if (str[i] == 'q') arr[16]++;
		else if (str[i] == 'r') arr[17]++;
		else if (str[i] == 's') arr[18]++;
		else if (str[i] == 't') arr[19]++;
		else if (str[i] == 'u') arr[20]++;
		else if (str[i] == 'v') arr[21]++;
		else if (str[i] == 'w') arr[22]++;
		else if (str[i] == 'x') arr[23]++;
		else if (str[i] == 'y') arr[24]++;
		else if (str[i] == 'z') arr[25]++;
	
	}

	for (int i = 0; i < 26; i++) { // 출력
		cout << arr[i] << " ";
	}

	return 0;
}
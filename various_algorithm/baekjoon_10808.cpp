#include <iostream>
using namespace std;

// ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. �� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	char str[101] = { 0,}; // �ܾ� S
	int arr[26] = { 0, }; // ���ĺ�

	cin >> str;

	for (int i = 0; i < 101; i++) { // �ܾ� �ϳ��� for���� ������.
		if (str[i] == 'a') arr[0]++; // �ܾ a�� ��� a�� Ƚ�� �߰�. ���� ����.
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

	for (int i = 0; i < 26; i++) { // ���
		cout << arr[i] << " ";
	}

	return 0;
}
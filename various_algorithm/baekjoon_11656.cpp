#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ���ڿ� S�� �־����� ��, ��� ���̻縦 ���������� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main() {
	vector <string> vec;
	string str;
	cin >> str;

	vec.push_back(str); // vector�� str ����.

	while (true)
	{

		str.erase(0,1); // str�� �� �� ���� ����
		if (str.length() == 0) break; // ���̰� 0�� ��� break.
		vec.push_back(str);	// vector�� str ����.
		
	}

	sort(vec.begin(), vec.end()); // ����

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	return 0;


}
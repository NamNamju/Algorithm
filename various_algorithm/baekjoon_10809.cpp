#include <iostream>
#include <vector>
using namespace std;

/* ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, 
�ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main() {
	vector <int> vec;
	string str;
	cin >> str;

	for (char c = 'a'; c <= 'z'; c++) { // 'a'���� 'z'����
		if (str.find(c) >= 0) // �ܾ ������ ���
		{
			vec.push_back(str.find(c));
		}
		else { // �ƴ� ���
			vec.push_back(-1);
		}
	}

	for (int i = 0; i < vec.size(); i++) { // ���
		cout << vec[i] << " ";
	}

	return 0;
}
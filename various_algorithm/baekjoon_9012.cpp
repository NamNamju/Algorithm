#include <stdio.h> 
#define MAXSIZE 50

// �������� �Է����� �־��� ��ȣ ���ڿ��� VPS ���� �ƴ����� �Ǵ��ؼ� �� ����� YES �� NO �� ��Ÿ����� �Ѵ�. 

int main() {

	int cnt, num;

	char arr[MAXSIZE];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {

		cnt = 0;

		scanf("%s", arr);

		for (int j = 0; j < MAXSIZE; j++) {

			if (arr[j] == '\0') // ���Ͱ� �Էµ� ��� for�� Ż��

				break;

			if (arr[j] == '(') // '('�� �Էµ� ��� ī��Ʈ

				cnt++;

			else if (arr[j] == ')' && cnt > 0) // ')'�� �Էµǰ� ī��Ʈ�� 0���� Ŭ��� ī��Ʈ ����

				cnt--;

			else if (arr[j] == ')' && cnt <= 0) { // ')'�� �Էµǰ� ī��Ʈ�� 0 ������ ��� ī��Ʈ ���� �� for�� Ż��
				/* 
				���⼭ ���ذ� �� �ȵƴµ�, ī��Ʈ�� 0������ ��� �̶����� ���� '('Ƚ������ ')'Ƚ���� ���ٴ� ���̰�,
				���� �ͺ��� ���� ��ȣ�� �� ���ٴ� �ǹ��̹Ƿ� �׷��� �Ǹ� ���� VPS�� �� �� ����.
				*/

				cnt--;

				break;

			}

		}

		if (cnt == 0)

			printf("YES\n");

		else

			printf("NO\n");

	}

}



��ó: https://jwprogramming.tistory.com/137 [�����ڸ� �޲ٴ� ���α׷���]
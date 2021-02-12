#include <stdio.h> 
#define MAXSIZE 50

// 여러분은 입력으로 주어진 괄호 문자열이 VPS 인지 아닌지를 판단해서 그 결과를 YES 와 NO 로 나타내어야 한다. 

int main() {

	int cnt, num;

	char arr[MAXSIZE];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {

		cnt = 0;

		scanf("%s", arr);

		for (int j = 0; j < MAXSIZE; j++) {

			if (arr[j] == '\0') // 엔터가 입력될 경우 for문 탈출

				break;

			if (arr[j] == '(') // '('가 입력될 경우 카운트

				cnt++;

			else if (arr[j] == ')' && cnt > 0) // ')'가 입력되고 카운트가 0보다 클경우 카운트 감소

				cnt--;

			else if (arr[j] == ')' && cnt <= 0) { // ')'가 입력되고 카운트가 0 이하일 경우 카운트 감소 후 for문 탈출
				/* 
				여기서 이해가 잘 안됐는데, 카운트가 0이하일 경우 이때까지 나온 '('횟수보다 ')'횟수가 많다는 뜻이고,
				열린 것보다 닫힌 괄호가 더 많다는 의미이므로 그렇게 되면 절대 VPS가 될 수 없다.
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



출처: https://jwprogramming.tistory.com/137 [개발자를 꿈꾸는 프로그래머]
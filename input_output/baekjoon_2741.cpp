#include <stdio.h>

// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

int main() {
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("%d", i);
	}

	return 0;
}
// 처음에는 c++로 작성하는 코드이기 때문에 cin과 cout을 이용하였다. 하지만 시간초과가 발생하였다.
/* 이것을 해결하려면 백준에는 이렇게 나온다.
C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, 
endl 대신 개행문자(\n)를 쓰자. 
단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
*/
// 하지만 굳이 이렇게 하기 보다는 scanf와 printf를 쓰는 것이 훨씬 좋은 코드이기 때문에 그렇게 풀이하였다.
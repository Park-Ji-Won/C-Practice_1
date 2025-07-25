#include <stdio.h>

int main()
{
	int a;
	a = 1;

	printf("a는 : %d", a);

	int b;/*C89 이전 버전에서는 항상 변수선언은 본문시작전 최상단에 위치해야 하나 그 이후버전
	에서는 int b 처럼 선언해도 문제 없음.*/

	return 0;
}
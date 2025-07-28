#include <stdio.h>
int main() {
	int a = 0xAF;//10101111
	int b = 0xB5;//10110101

	printf("%x \n", a & b);
	printf("%x \n", a | b);
	printf("%x \n", a ^ b);
	printf("%x \n", ~a);
	printf("%x \n", a << 2);
	printf("%x \n", b >> 3);

	return 0;
}

/*
+, -, /, *, =, % 가 무슨 역할을 하는 연산자 인지 배웠습니다.
&, |, <<, >> 가 무슨 역할을 하는 연산자 인지 배웠습니다.
연산자 우선 순위에 대해 다루었습니다. 
우선 순위가 헷갈리거나, 복잡한 수식이면 괄호를 적극 활용합니다.*/
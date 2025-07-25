#include <stdio.h>

int main()
{
	int a;
	a = 127;

	printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a); //a의 값을 8진수로 출력해라
	printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a); //a의 값을 10진수로 출력해라
	printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a); //a의 값을 16진수로 출력해라

	return 0;
}
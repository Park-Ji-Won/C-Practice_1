#include <stdio.h>

int main(void) {
	int YourAge;

	printf("당신의 나이는 몇인가? \n");
	scanf_s("%d", &YourAge);

	printf("아, %d살이군요.\n", YourAge);

	return 0;
}
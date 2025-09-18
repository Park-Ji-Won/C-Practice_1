#include <stdio.h>

int main() {
	int num;

	printf("구구단 프로그램 \n");
	printf("몇 단을 출력할까요? ");
	scanf_s("%d", &num);

	printf("\n %d단 \n", num);

	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
	return 0;
}
#include <stdio.h>

int main() {
	int num1, num2;
	int sum, difference, product;
	float division;

	printf("간단한 계산기\n");

	printf("첫 번째 숫자를 입력하세요: ");
	scanf_s("%d", &num1);

	printf("두 번째 숫자를 입력하세요: ");
	scanf_s("%d", &num2);

	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	division = (float)num1 / num2;

	printf("\n 계산결과 \n");
	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d - %d = %d\n", num1, num2, difference);
	printf("%d × %d = %d\n", num1, num2, product);
	printf("%d ÷ %d = %.2f\n", num1, num2, division);

	return 0;
}
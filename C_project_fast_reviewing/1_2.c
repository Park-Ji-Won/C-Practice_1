#include <stdio.h>

int main() {
	int n, sum = 0;
	printf("몇 개의 수를 입력하시겠습니까? ");
	scanf_s("%d", &n);

	int num;
	for (int i = 0; i < n; i++) {
		printf("%d번째 수: ", i + 1);
		scanf_s("%d", &num);
		sum += num;
	}

	double average = (double)sum / n;
	printf("평균: %.2f\n", average);

	return 0;
}
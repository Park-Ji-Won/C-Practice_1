#include <stdio.h>

int main() {
	int scores[5];
	int sum = 0;
	float average;

	printf("성적 관리 프로그램\n");
	printf("5과목의 점수를 입력하세요:\n");

	for (int i = 0; i < 5; i++) {
		printf("%d번째 점수: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	printf("\n입력된 점수\n");

	for (int i = 0; i < 5; i++) {
		printf(" %d번째 점수: %d\n", i + 1, scores[i]);
		sum += scores[i];
	}

	average = (float)sum / 5;

	printf("\n=== 결과 ===\n");
	printf("총합: %d점\n", sum);
	printf("평균: %.1f점\n", average);

	return 0;
}
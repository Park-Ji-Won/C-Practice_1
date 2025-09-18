#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int secret_number;
	int guess;
	int attempts = 0;
	int max_attempts = 5;

	srand(time(NULL));
	secret_number = rand() % 100 + 1;

	printf("=== 숫자 맞히기 게임 ===\n");
	printf("1부터 100 사이의 숫자를 맞춰보세요!\n");
	printf("기회는 %d번입니다.\n\n", max_attempts);

	for (int i = 0; i < max_attempts; i++) {
		attempts++;
		printf("시도 %d/%d - 숫자를 입력하세요: ", attempts, max_attempts);
		scanf_s("%d", &guess);

		if (guess == secret_number) {
			printf("🎉 정답입니다! %d번 만에 맞췄습니다!\n", attempts);
			break;  // 게임 종료
		}
		else if (guess < secret_number) {
			printf("UP! 더 큰 숫자입니다.\n\n");
		}
		else {
			printf("DOWN! 더 작은 숫자입니다.\n\n");
		}
	}

	if (guess != secret_number) {
		printf("아쉽네요! 정답은 %d였습니다.\n", secret_number);
	}

	return 0;
}
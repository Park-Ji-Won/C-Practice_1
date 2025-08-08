/*example if */
#include <stdio.h>
int main() {
	int i;
	printf("입력하고싶은 숫자를 입력하세요: ");
	scanf_s("%d", &i);

	if (i == 7) { 
		printf("당신은 행운의 숫자 7을 입력했습니다."); 
	}

	return 0;
}
//배열에서 최댓값

#include <stdio.h>

int main() {
	int arr[10] = { 10,20,40,50,20,60,60,20,30,90 };
	int max = arr[0];

	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("최댓값: %d\n", max);

	return 0;
}
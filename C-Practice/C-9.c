#include <stdio.h>

int add(int a, int b); 
void sayHello();
int getMax(int x, int y);

void sayHello() {
	printf("안녕하세요\n");
}

int add(int a, int b) {
	return a + b;
}

int getMax(int x, int y) {
	if (x > y)return x;
	else return y;
}

int main() {
	printf("=== 함수 사용 예제 ===\n\n");

	sayHello();

	int result1 = add(10, 20);
	printf("10 + 20 = %d\n", result1);

	int result2 = add(5, 7);
	printf("5 + 7 = %d\n", result2);

	int bigger = getMax(15, 8);
	printf("15와 8 중 큰 수: %d\n", bigger);

	return 0;
}
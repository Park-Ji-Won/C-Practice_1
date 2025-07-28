#include <stdio.h>
int main() {
	double celsious;

	printf("섭씨를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
	printf("섭씨 온도를 입력하시오:");
	scanf("%lf", &celsious);

	printf("섭씨 온도 %f는 화씨 온도 %f 입니다.\n", celsious, 9 / 5 * celsious + 32);
	return 0;
}
/*
9 * celsius / 5 + 32
vs
9 / 5 * celsius + 32

전자를 계산하면 왼쪽부터 오른쪽으로 순서대로
9 * celsius를 먼저 계산하고, 그 결과값에 / 5를 계산한 후에 32를 더하게됩니다.
int인 9가 double인 celsius와 계산하니 9가 더 큰 단위인 double로 올라가고,
(9*celsius)라는 그 double값을 다시 int인 5와 계산하면서 5도 
double로 올라가 정확도가 높은 계산을 하게됩니다..

후자는 int끼리의 연산인 9 / 5 를 먼저 계산하게되어 
값이 정확도가 높은 float이나 double로 가는 일 없이 int인 1로 가버리고
그럼 int인 1 곱하기 celsius니 결과는 그냥 celsius + 32*/
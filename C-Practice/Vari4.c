#include <stdio.h>

int main()
{
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;

	printf("a: %.2f \n", a);// %.2f=> 소수점 이하 둘째짜리 까지 [무조건] 해당 실수 를 출력해라 ex)%.10f
	printf("c: %5d \n", c);// %5d 숫자의 자리수를 되도록 다섯자리까지 맞춰라 ex)123456의 경우=>12345
	printf("b: %6.3f \n", b);//%6.3f 전체자리수를 여섯자리에 되도록 맞추고 소수점 이하 셋째자리까지 실수를 출력해라

	return 0;
}
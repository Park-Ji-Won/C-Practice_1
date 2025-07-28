#include <stdio.h>

int main()
{
	int a, b;
	//대입 연산자 ex)a=b=c=d=5;
	a = 10;
	b = 3;
	// ＋, －, *, /(나눗셈 몫), %(나눗셈 나머지) 를 산술 연산자(Arithmetic Operator) 
	//산술 연산자(사칙연산)
	printf("a + b는 : %d \n", a + b);//덧셈
	printf("a - b는 : %d \n", a - b);//뺄셈
	printf("a * b는 : %d \n", a * b);//곱셉
	printf("a / b는 : %d \n", a / b);//나눗셈 => 나눈 몫 (%d가 정수를 호출하기에 실수인 소수점 값은 제외)
	printf("a %% b는 : %d \n", a % b);//나누고 나머지 값 %%은=> %만 %은 => %d와 %f가 동시사용가능

	return 0;
}
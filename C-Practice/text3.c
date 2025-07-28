#include <stdio.h>
int main() {
	char ch;

	short sh;
	int i;
	long lo;

	float fl;
	double du;

	printf("char 형 변수 입력: ");//문자를 보관하는 변수를 선언
	scanf("%c", &ch);
	/*1바이트를 차지하는 char 해당 변수인 ch에 한글 입력하면 오류 => 혀용된 메모리 이상으로 집어
	넣어 발생하는 오류인 버퍼 오퍼플로우가 발생 한다(Buffer Overflow)*/

	printf("short 형 변수 입력: ");//정수형 변수=int
	scanf("%hd", &sh);
	printf("int 형 변수 입력: ");
	scanf("%d", &i);
	printf("long 형 변수 입력: ");//정수형 변수=int
	scanf("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);

	printf("char : %c, short : %d, int : %d", ch, sh, i);
	printf("long : %ld, float : %f, double : %f", lo, fl, du);
	return 0;
}
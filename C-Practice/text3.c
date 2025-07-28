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

/*
char 은 1 바이트 정수를 저장하는 타입으로, 주로 문자를 저장하는데 사용됩니다.

각 문자들은 아스키 테이블이란 표를 통해 특정 정수와 대응되어 있습니다. 
예를 들어서 65 는 알파벳 A 와 대응됩니다.

scanf 를 통해 사용자로 부터 데이터를 받을 수 있습니다.

%c 는 문자, %d 는 정수, %f 는 float, %lf 는 double 을 받습니다.

*/